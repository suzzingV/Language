package sec05.exam02;

import java.nio.*;
import java.nio.channels.AsynchronousFileChannel;
import java.nio.charset.Charset;
import java.nio.file.*;
import java.util.*;
import java.util.concurrent.*;
import java.io.*;
import java.nio.channels.*;

public class AsynchronousFileChannelReadExample {
	public static void main(String[] args) throws Exception {
		ExecutorService executorService = Executors.newFixedThreadPool(
				Runtime.getRuntime().availableProcessors()
		);
		
		for(int i = 0; i < 10; i++) {
			Path path = Paths.get("C:/Temp/file" + i + ".txt");
			
			AsynchronousFileChannel fileChannel = AsynchronousFileChannel.open(
					path,
					EnumSet.of(StandardOpenOption.READ),
					executorService
			);
			
			ByteBuffer byteBuffer = ByteBuffer.allocate((int)fileChannel.size());
			
			class Attachment {
				Path path;
				AsynchronousFileChannel fileChannel;
				ByteBuffer byteBuffer;
			}
			Attachment attachment = new Attachment();
			attachment.path = path;
			attachment.fileChannel = fileChannel;
			attachment.byteBuffer = byteBuffer;
			
			CompletionHandler<Integer, Attachment> completionHandlernew = 
				new CompletionHandler<Integer, Attachment> () {
					@Override
					public void completed(Integer result, Attachment attachment) {
						attachment.byteBuffer.flip();
						Charset charset = Charset.defaultCharset();
						String data = charset.decode(attachment.byteBuffer).toString();
						
						System.out.println(attachment.path.getFileName() + " : " + data + " : " +
								Thread.currentThread().getName());
						try { fileChannel.close(); } catch (IOException e) {}
					}
					@Override
					public void failed(Throwable exc, Attachment attachment) {
						exc.printStackTrace();
						try { fileChannel.close(); } catch (IOException e) {}
					}
			};
			
			fileChannel.read(byteBuffer, 0, attachment, completionHandlernew);
		}
		
		Thread.sleep(1000);
		executorService.shutdown();
	}
}