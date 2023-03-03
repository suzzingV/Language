package sec08.exam01;

import java.util.*;

import sec07.AutoSaveThread;

public class ThreadInfoExample {
    public static void main(String[] args) {
        AutoSaveThread autoSaveThread = new AutoSaveThread();
        autoSaveThread.setDaemon(true);
        autoSaveThread.setName("AutoSaveThread");
        autoSaveThread.start();

        Map<Thread, StackTraceElement[]> map = Thread.getAllStackTraces(); //���μ��� ������ �����ϴ� ��� �����忡 ���� ����
        Set<Thread> threads = map.keySet(); //map.keySet() : key�� ������
        for(Thread thread : threads) {
            System.out.println("Name: " + thread.getName() + (thread.isDaemon() ? "(����)" : "(��)"));
            System.out.println("�Ҽӱ׷�: " + thread.getThreadGroup().getName()); //getThreadGroup() : ������ �׷��̸� ���
        }
    }
}
