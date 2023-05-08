package sec04.exam02;

import java.nio.channels.FileChannel;
import java.nio.charset.Charset;
import java.nio.file.*;
import java.io.*;
import java.nio.*;

public class FileChannelWriteExample {
	public static void main(String[] args) throws IOException {
		Path path = Paths.get("C:/Temp/file.txt");
		Files.createDirectories(path.getParent()); //상위 디렉토리 존재하지 않는 경우 생성함

		FileChannel fileChannel = FileChannel.open(
				path, StandardOpenOption.CREATE, StandardOpenOption.WRITE);
		
		String data = "안녕하세요";
		Charset charset = Charset.defaultCharset();
		ByteBuffer byteBuffer = charset.encode(data);
		
		int bytesCount = fileChannel.write(byteBuffer);
		System.out.println("file.txt: " + bytesCount + " bytes written");
		
		fileChannel.close();
				
	}
}