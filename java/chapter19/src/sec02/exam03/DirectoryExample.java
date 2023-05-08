package sec02.exam03;

import java.nio.file.Files;
import java.nio.file.Paths;
import java.nio.file.Path;
import java.nio.file.DirectoryStream;

public class DirectoryExample {
	public static void main(String[] args) throws Exception {
		Path path1 = Paths.get("C:\\Users\\skylim\\Documents\\자바 슈찡비\\dir\\subdir");
		Path path2 = Paths.get("C:\\Users\\skylim\\Documents\\자바 슈찡비\\file.txt");
		
		if(Files.notExists(path1)) {
			Files.createDirectories(path1); //경로상에 존재하지 않는 모든 디렉토리 생성
		}
		
		if(Files.notExists(path2)) {
			Files.createFile(path2);
		}
		
		Path path3 = Paths.get("C:\\Users\\skylim\\Documents\\자바 슈찡비");
		DirectoryStream<Path> directoryStream = Files.newDirectoryStream(path3);  //디렉토리 내용을 반복자로 얻음
		for(Path path : directoryStream) {
			if(Files.isDirectory(path)) {
				System.out.println("[디렉토리] " + path.getFileName());
			}
			
			if(Files.isRegularFile(path)) {
				System.out.println("[파일] " + path.getFileName());
			}
		}
	}
}