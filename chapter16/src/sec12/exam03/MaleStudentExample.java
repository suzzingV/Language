package sec12.exam03;

import java.util.Arrays;
import java.util.List;

import sec11.exam01.*;
import sec11.exam02.MaleStudent;

public class MaleStudentExample {
    public static void main(String[] args) {
        List<Student> totalList = Arrays.asList(
            new Student("ȫ�浿", 10, Student.Sex.MALE),
            new Student("�����", 10, Student.Sex.FEMALE),
            new Student("�ſ��", 10, Student.Sex.MALE),
            new Student("�ڼ���", 10, Student.Sex.FEMALE)
        );

        MaleStudent maleStudent = totalList.parallelStream()
            .filter(s -> s.getSex() == Student.Sex.MALE)
            .collect(MaleStudent :: new, MaleStudent :: accumulate, MaleStudent :: combine);
        
        maleStudent.getList().stream()
            .forEach(s -> System.out.println(s.getName()));
    }
}
