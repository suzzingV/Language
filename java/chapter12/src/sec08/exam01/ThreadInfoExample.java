package sec08.exam01;

import java.util.*;

import sec07.AutoSaveThread;

public class ThreadInfoExample {
    public static void main(String[] args) {
        AutoSaveThread autoSaveThread = new AutoSaveThread();
        autoSaveThread.setDaemon(true);
        autoSaveThread.setName("AutoSaveThread");
        autoSaveThread.start();

        Map<Thread, StackTraceElement[]> map = Thread.getAllStackTraces(); //프로세스 내에서 실행하는 모든 스레드에 대한 정보
        Set<Thread> threads = map.keySet(); //map.keySet() : key만 가져옴
        for(Thread thread : threads) {
            System.out.println("Name: " + thread.getName() + (thread.isDaemon() ? "(데몬)" : "(주)"));
            System.out.println("소속그룹: " + thread.getThreadGroup().getName()); //getThreadGroup() : 스레드 그룹이름 얻기
        }
    }
}
