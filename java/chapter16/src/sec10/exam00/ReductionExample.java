package sec10.exam00;

import java.util.Arrays;
import java.util.List;
import java.util.stream.*;

public class ReductionExample {
    public static void main(String[] args) {
        List<Student> studentList = Arrays.asList(
            new Student("홍길동", 92),
            new Student("신용권", 95),
            new Student("감자바", 88)
        );

        int sum1 = studentList.stream()
            .mapToInt(Student :: getScore) //IntStream 리턴
            .sum();
        
        int sum2 = studentList.stream()
            .map(Student :: getScore)
            .reduce((a, b) -> a + b)
            .get(); //디폴트값 없는 reduce는 OptionalXXX 리턴 -> get() 해줘야함
        
        int sum3 = studentList.stream()
            .map(Student :: getScore)
            //.sum(); //sum()은 기본타입 스트림만 지원
            .reduce(0, (a, b) -> a + b); //디폴트값 있으면 기본 타입 반환
        
        System.out.println("sum1: " + sum1);
        System.out.println("sum2: " + sum2);
        System.out.println("sum3: " + sum3);
    }
}
