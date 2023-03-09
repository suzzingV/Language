package exam05;

import java.util.Arrays;
import java.util.List;
import java.util.function.*;

public class PredicateExample {
    private static List<Student> list = Arrays.asList(
        new Student("ȫ�浿", "����", 90),
        new Student("�����", "����", 90),
        new Student("���ڹ�", "����", 95), 
        new Student("���ѳ�", "����", 92)
    );

    public static double avg( Predicate<Student> predicate ) {
        int sum = 0;
        int count = 0;
        for(Student student : list) {
            if(predicate.test(student)) {
                count++;
                sum += student.getScore();
            }
        }
        return (double) sum / count;
    }

    public static void main(String[] args) {
        double maleAvg = avg( t -> t.getSex().equals("����"));
        System.out.println("���� ��� ����: " + maleAvg);

        double femaleAvg = avg( t -> t.getSex().equals("����"));
        System.out.println("���� ��� ����: " + femaleAvg);
    }
}
