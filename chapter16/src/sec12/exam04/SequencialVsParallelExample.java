package sec12.exam04;

import java.util.List;
import java.util.Arrays;

public class SequencialVsParallelExample {
    public static void work(int value) {
        try { Thread.sleep(100); } catch (InterruptedException e) {}
        //millis �� �������� ����ó���� ����
    }
    
    public static long testSequencial(List<Integer> list) {
        long start = System.nanoTime();
        list.stream().forEach((a) -> work(a));
        long end = System.nanoTime();
        long runTime = end - start;
        return runTime;
    }

    public static long testParallel(List<Integer> list) {
        long start = System.nanoTime();
        list.parallelStream().forEach((a) -> work(a));
        long end = System.nanoTime();
        long runTime = end - start;
        return runTime;
    }

    public static void main(String[] args) {
        List<Integer> list = Arrays.asList(0, 1, 2, 3, 4, 5, 6, 7, 8, 9);
        
        long timeSequencial = testSequencial(list);
        long timeParallel = testParallel(list);

        System.out.println(timeSequencial);
        System.out.println(timeParallel);
        System.out.print("���� �׽�Ʈ ���: ");
        if(timeSequencial < timeParallel) {
            System.out.println("����ó�� �ð��� �� ����");
        } else {
            System.out.println("����ó�� �ð��� �� ����");
        }
    }
    
}
