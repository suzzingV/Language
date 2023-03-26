package sec12.exam04;

import java.util.*;

public class ArrayListVsLinkedListExample {
    public static void work(int value) {
    }

    public static long testParallel(List<Integer> list) {
        long start = System.nanoTime();
        list.stream().forEach((a) -> work(a));
        long end = System.nanoTime();
        long runTime = end - start;
        return runTime;
    }

    public static void main(String[] args) {
        List<Integer> arrayList = new ArrayList<Integer>();
        List<Integer> linkedList = new LinkedList<Integer>();
        for(int i = 0; i < 10; i++) { //처리 개수 적으면 순차가 더 빠름
            arrayList.add(i);
            linkedList.add(i);
        }

        //워밍업
        long arrayListListParallel = testParallel(arrayList);
        long linkedListParallel = testParallel(linkedList);
        
        arrayListListParallel = testParallel(arrayList);
        linkedListParallel = testParallel(linkedList);

        System.out.print("성능 테스트 결과: ");
        if(arrayListListParallel < linkedListParallel) {
            System.out.println("ArrayList 처리가 더 빠름");
        } else {
            System.out.println("LinkedList 처리가 더 빠름");
        }
    }
}
