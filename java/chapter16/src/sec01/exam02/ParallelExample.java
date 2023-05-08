package sec01.exam02;

import java.util.Arrays;
import java.util.stream.Stream;
import java.util.*;
public class ParallelExample {
    public static void main(String[] args) {
        List<String> list = Arrays.asList(
            "ȫ�浿", "�ſ��", "���ڹ�",
            "���ٽ�", "�ں���"
        );
        
        Stream<String> stream = list.stream();
        stream.forEach(ParallelExample :: print); //�޼ҵ� ����(s -> ParallelExampele.print(s))
        
        System.out.println();

        Stream<String> parallelStream = list.parallelStream();
        parallelStream.forEach(ParallelExample :: print);
    }

    public static void print(String str) {
        System.out.println(str + " : "  + Thread.currentThread().getName());
    }
}
