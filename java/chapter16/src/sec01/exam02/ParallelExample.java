package sec01.exam02;

import java.util.Arrays;
import java.util.stream.Stream;
import java.util.*;
public class ParallelExample {
    public static void main(String[] args) {
        List<String> list = Arrays.asList(
            "홍길동", "신용권", "감자바",
            "람다식", "박병렬"
        );
        
        Stream<String> stream = list.stream();
        stream.forEach(ParallelExample :: print); //메소드 참조(s -> ParallelExampele.print(s))
        
        System.out.println();

        Stream<String> parallelStream = list.parallelStream();
        parallelStream.forEach(ParallelExample :: print);
    }

    public static void print(String str) {
        System.out.println(str + " : "  + Thread.currentThread().getName());
    }
}
