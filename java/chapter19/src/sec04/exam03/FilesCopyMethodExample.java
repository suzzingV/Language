package sec04.exam03;

import java.nio.file.*;
import java.nio.file.StandardCopyOption;

public class FilesCopyMethodExample {
	public static void main(String[] args) throws Exception {
		Path from = Paths.get("C:\\Users\\skylim\\git\\java\\chapter19\\src\\sec04\\exam03\\xiao.jpg");
		Path to = Paths.get("C:\\Users\\skylim\\git\\java\\chapter19\\src\\sec04\\exam03\\xiao3.jpg");
		
		Files.copy(from,to, StandardCopyOption.REPLACE_EXISTING);
		System.out.println("파일 복사 성공");
	}
}