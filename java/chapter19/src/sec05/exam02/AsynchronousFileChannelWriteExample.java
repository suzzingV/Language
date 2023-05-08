package sec05.exam02;

import java.util.EnumSet;
import java.util.concurrent.*;
import java.nio.file.*;
import java.nio.channels.*;
import java.nio.charset.Charset;
import java.nio.*;
import java.io.*;

public class AsynchronousFileChannelWriteExample {
	public static void main(String[] args) throws Exception {
		ExecutorService executorService = Executors.newFixedThreadPool(
				Runtime.getRuntime().availableProcessors()
		);
		
		for(int i = 0; i < 10; i++) {
			Path path = Paths.get("C:/Temp/file" + i + ".txt");
			Files.createDirectories(path.getParent());
			
			AsynchronousFileChannel fileChannel = AsynchronousFileChannel.open(
				path,
				EnumSet.of(StandardOpenOption.CREATE, StandardOpenOption.WRITE),
				executorService
			);
			
			Charset charset = Charset.defaultCharset();
			ByteBuffer byteBuffer = charset.encode("안녕하세요");
			
			class Attachment {
				Path path;
				AsynchronousFileChannel fileChannel;
			}
			Attachment attachment = new Attachment();
			attachment.path = path;
			attachment.fileChannel = fileChannel;
			
			CompletionHandler<Integer, Attachment> completionHandler =
					new CompletionHandler<Integer, Attachment>() {
				@Override
				public void completed(Integer result, Attachment attachment) { //다 같은 attachment
					System.out.println(attachment.path.getFileName() + " : " + result +
							" bytes written : " + Thread.currentThread().getName());
				}
				
				@Override
				public void failed(Throwable exc, Attachment attachment) {
					exc.printStackTrace();
					try { attachment.fileChannel.close(); } catch (IOException e) {}
				}
			};
			
			fileChannel.write(byteBuffer, 0, attachment, completionHandler);
		}
		
		Thread.sleep(1000);
		executorService.shutdown();
	}
}