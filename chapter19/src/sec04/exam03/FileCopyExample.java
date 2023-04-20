package sec04.exam03;

import java.nio.channels.*;
import java.nio.file.Paths;
import java.nio.*;
import java.nio.file.*;


public class FileCopyExample {
	public static void main(String[] args) throws Exception {
		Path from = Paths.get("C:\\Users\\skylim\\git\\java\\chapter19\\src\\sec04\\exam03\\xiao.jpg");
		Path to = Paths.get("C:\\Users\\skylim\\git\\java\\chapter19\\src\\sec04\\exam03\\xiao2.jpg");
		
		FileChannel fileChannel_from = FileChannel.open(
				from, StandardOpenOption.READ);
		
		FileChannel fileChannel_to = FileChannel.open(
				to, StandardOpenOption.CREATE, StandardOpenOption.WRITE);
		
		ByteBuffer buffer = ByteBuffer.allocateDirect(100);
		int byteCount;
		while(true) {
			buffer.clear();
			byteCount = fileChannel_from.read(buffer);
			if(byteCount == -1) break;
			buffer.flip();
			fileChannel_to.write(buffer);
		}
		
		fileChannel_from.close();
		fileChannel_to.close();
		System.out.println("파일 복사 성공");
				
	}
}