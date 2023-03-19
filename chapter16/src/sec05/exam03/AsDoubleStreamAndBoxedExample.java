package sec05.exam03;

import java.util.stream.IntStream;
import java.util.*;

public class AsDoubleStreamAndBoxedExample {
    public static void main(String[] args) {
        int[] intArray = { 1, 2, 3, 4, 5 };

        IntStream intStream = Arrays.stream(intArray);
        intStream
            .asDoubleStream();
            //.forEach(d -> System.out.println(d));
        
        System.out.println();

        //intStream = Arrays.stream(intArray); //다시 정의 안해주면 그 뒤를 이으려고 함
        intStream
            //.boxed()
            //.forEach(obj -> System.out.println(obj.intValue()));
            .forEach(d -> System.out.println(d));
    }
}
