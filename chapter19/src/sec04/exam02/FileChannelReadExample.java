package sec04.exam02;

import java.nio.*;
import java.nio.channels.FileChannel;
import java.nio.file.*;
import java.nio.charset.*;

public class FileChannelReadExample {
	public static void main(String[] args) throws Exception {
		Path path = Paths.get("C:/Temp/file.txt");
		
		FileChannel fileChannel = FileChannel.open(
				path, StandardOpenOption.READ);
		
		ByteBuffer byteBuffer = ByteBuffer.allocate(100);
		
		Charset charset = Charset.defaultCharset();
		String data = "";
		int byteCount;
		
		while(true) {
			byteCount = fileChannel.read(byteBuffer);
			if(byteCount == -1) break;
			byteBuffer.flip();
			data += charset.decode(byteBuffer).toString();
			byteBuffer.clear();
		}
		
		fileChannel.close();
		
		System.out.println("file.txt: " + data);
	}
}