package sec01.exam01;

import java.util.Iterator;
import java.util.List;
import java.util.stream.Stream;
import java.util.Arrays;

public class IteratorVsStreamExample {
    public static void main(String[] args) {
        List<String> list = Arrays.asList("ȫ�浿", "�ſ��", "���ڹ�");

        Iterator<String> iterator = list.iterator();
        while(iterator.hasNext()) {
            String name = iterator.next();
            System.out.println(name);
        }

        System.out.println();

        Stream<String> stream = list.stream();
        stream.forEach(name -> System.out.println(name));
    }
}
