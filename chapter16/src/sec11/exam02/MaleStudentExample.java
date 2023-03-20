package sec11.exam02;

import java.util.Arrays;
import java.util.List;

import sec11.exam01.Student;

public class MaleStudentExample {
    public static void main(String[] args) {
        List<Student> totalList = Arrays.asList(
            new Student("ȫ�浿", 10, Student.Sex.MALE),
            new Student("�����", 6, Student.Sex.FEMALE),
            new Student("�ſ��", 10, Student.Sex.MALE),
            new Student("�ڼ���", 6, Student.Sex.FEMALE)
        );

        MaleStudent maleStudent = totalList.stream()
            .filter(s -> s.getSex() == Student.Sex.MALE)
            .collect(MaleStudent :: new, MaleStudent :: accumulate, MaleStudent :: combine);
        
        maleStudent.getList().stream()
            .forEach(s -> System.out.println(s.getName()));
    }
}
