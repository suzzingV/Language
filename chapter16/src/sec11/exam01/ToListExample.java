package sec11.exam01;

import java.util.*;
import java.util.stream.Collectors;

public class ToListExample {
    public static void main(String[] args) {
        List<Student> totalList = Arrays.asList(
            new Student("ȫ�浿", 10, Student.Sex.MALE),
            new Student("�����", 6, Student.Sex.FEMALE),
            new Student("�ſ��", 10, Student.Sex.MALE),
            new Student("�ڼ���", 6, Student.Sex.FEMALE)
        );

        List<Student> maleList = totalList.stream()
            .filter(s -> s.getSex() == Student.Sex.MALE)
            .collect(Collectors.toList());
        maleList.stream()
            .forEach(s -> System.out.println(s.getName()));

        Set<Student> femaleList = totalList.stream()
            .filter(s -> s.getSex() == Student.Sex.FEMALE)
            .collect(Collectors.toCollection(HashSet :: new)); //Collectors.toCollection(): �Ű������� �־��� Collection�� ����
            //new HashSet()
        femaleList.stream()
            .forEach(s -> System.out.println(s.getName()));
    }
}
