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
        for(int i = 0; i < 10; i++) { //ó�� ���� ������ ������ �� ����
            arrayList.add(i);
            linkedList.add(i);
        }

        //���־�
        long arrayListListParallel = testParallel(arrayList);
        long linkedListParallel = testParallel(linkedList);
        
        arrayListListParallel = testParallel(arrayList);
        linkedListParallel = testParallel(linkedList);

        System.out.print("���� �׽�Ʈ ���: ");
        if(arrayListListParallel < linkedListParallel) {
            System.out.println("ArrayList ó���� �� ����");
        } else {
            System.out.println("LinkedList ó���� �� ����");
        }
    }
}
