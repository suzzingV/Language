package sec02.exam01;

import java.util.*;
import java.util.stream.*
;
public class FromCollectionExample {
    public static void main(String[] args) {
        List<Student> studentList = Arrays.asList(
            new Student("ȫ�浿", 10),
            new Student("�ſ��", 20),
            new Student("���̼�", 30)
        );

        Stream<Student> stream = studentList.stream();
        stream.forEach(s -> System.out.println(s.getName()));
    }
}
