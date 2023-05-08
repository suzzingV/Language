package sec11.exam01;

import java.util.*;
import java.util.stream.Collectors;

public class ToListExample {
    public static void main(String[] args) {
        List<Student> totalList = Arrays.asList(
            new Student("홍길동", 10, Student.Sex.MALE),
            new Student("김수애", 6, Student.Sex.FEMALE),
            new Student("신용권", 10, Student.Sex.MALE),
            new Student("박수미", 6, Student.Sex.FEMALE)
        );

        List<Student> maleList = totalList.stream()
            .filter(s -> s.getSex() == Student.Sex.MALE)
            .collect(Collectors.toList());
        maleList.stream()
            .forEach(s -> System.out.println(s.getName()));

        Set<Student> femaleList = totalList.stream()
            .filter(s -> s.getSex() == Student.Sex.FEMALE)
            .collect(Collectors.toCollection(HashSet :: new)); //Collectors.toCollection(): 매개값으로 주어진 Collection에 저장
            //new HashSet()
        femaleList.stream()
            .forEach(s -> System.out.println(s.getName()));
    }
}
