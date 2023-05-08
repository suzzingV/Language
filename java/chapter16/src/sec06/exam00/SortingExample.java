package sec06.exam00;

import java.util.Arrays;
import java.util.List;
import java.util.stream.IntStream;
import java.util.*;

public class SortingExample {
    public static void main(String[] args) {
        IntStream intStream = Arrays.stream(new int[] {5, 3, 2, 1, 4});
        intStream
            .sorted()
            .forEach(n -> System.out.println(n + ","));
        System.out.println();

        List<Student> studentList = Arrays.asList(
            new Student("ȫ�浿", 30),
            new Student("�ſ��", 10),
            new Student("���̼�", 20)
        );
        
        studentList.stream()
            .sorted()
            .forEach(s -> System.out.println(s.getScore() + ","));
        System.out.println();

        studentList.stream()
            .sorted(Comparator.reverseOrder())
            .forEach(s -> System.out.println(s.getScore() + ","));
    }
}
