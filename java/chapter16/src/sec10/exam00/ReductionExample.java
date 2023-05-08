package sec10.exam00;

import java.util.Arrays;
import java.util.List;
import java.util.stream.*;

public class ReductionExample {
    public static void main(String[] args) {
        List<Student> studentList = Arrays.asList(
            new Student("ȫ�浿", 92),
            new Student("�ſ��", 95),
            new Student("���ڹ�", 88)
        );

        int sum1 = studentList.stream()
            .mapToInt(Student :: getScore) //IntStream ����
            .sum();
        
        int sum2 = studentList.stream()
            .map(Student :: getScore)
            .reduce((a, b) -> a + b)
            .get(); //����Ʈ�� ���� reduce�� OptionalXXX ���� -> get() �������
        
        int sum3 = studentList.stream()
            .map(Student :: getScore)
            //.sum(); //sum()�� �⺻Ÿ�� ��Ʈ���� ����
            .reduce(0, (a, b) -> a + b); //����Ʈ�� ������ �⺻ Ÿ�� ��ȯ
        
        System.out.println("sum1: " + sum1);
        System.out.println("sum2: " + sum2);
        System.out.println("sum3: " + sum3);
    }
}
