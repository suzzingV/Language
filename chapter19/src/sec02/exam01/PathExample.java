package sec02.exam01;

import java.nio.file.Paths;
import java.util.Iterator;
import java.nio.file.Path;

public class PathExample {
	public static void main(String[] args) {
		Path path = Paths.get("src/sec02/exam01/PathExample.java");
		System.out.println("[파일명] " + path.getFileName()); //부모 경로 제외한 파일, 디렉토리 이름만 가진 Path 리턴
		System.out.println("[부모 디렉토리명] " + path.getParent().getFileName());
		System.out.println("중첩 경로수: " + path.getNameCount()); //C:/ 제외
		
		System.out.println();
		for(int i = 0; i < path.getNameCount(); i++) {
			System.out.println(path.getName(i));
		}
		
		System.out.println();
		Iterator<Path> iterator = path.iterator();
		while(iterator.hasNext()) {
			Path temp = iterator.next();
			System.out.println(temp.getFileName());
		}
	}
}