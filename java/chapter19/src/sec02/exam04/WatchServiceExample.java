package sec02.exam04;

import java.nio.file.*;
import java.util.*;
import java.nio.file.WatchEvent.*;

public class WatchServiceExample {
	public static void main(String[] args) throws Exception {
					WatchService watchService = FileSystems.getDefault().newWatchService();
					Path directory = Paths.get("C:\\Users\\skylim\\Documents\\자바 슈찡비");
					directory.register(watchService, StandardWatchEventKinds.ENTRY_CREATE,
													StandardWatchEventKinds.ENTRY_DELETE,
													StandardWatchEventKinds.ENTRY_MODIFY);
					while(true) {
						WatchKey watchKey = watchService.take();
						List<WatchEvent<?>> list = watchKey.pollEvents();
						for(WatchEvent watchEvent : list) {
							Kind kind = watchEvent.kind();
							Path path = (Path)watchEvent.context();
							if(kind == StandardWatchEventKinds.ENTRY_CREATE) {
								System.out.println("파일 생성됨 -> " + path.getFileName() + "\n");
							} else if (kind == StandardWatchEventKinds.ENTRY_DELETE) {
								System.out.println("파일 삭제됨 -> " + path.getFileName() + "\n");
							} else if (kind == StandardWatchEventKinds.ENTRY_MODIFY) {
								System.out.println("파일 수정됨 -> " + path.getFileName() + "\n");
							} else if (kind == StandardWatchEventKinds.OVERFLOW) {
							}
						}
						boolean valid = watchKey.reset();
						if(!valid) { break; }
					}
			}
}