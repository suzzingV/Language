package exam03;

import java.util.Arrays;
import java.util.function.ToIntFunction;
import java.util.List;

public class FunctionExample2 {
    private static List<Student> list = Arrays.asList(
        new Student("ȫ�浿", 90, 96),
        new Student("�ſ��", 95, 93)
    );

    public static double avg(ToIntFunction<Student> function) {
        int sum = 0;
        for(Student student : list) {
            sum += function.applyAsInt(student);
        }
        double avg = sum / list.size();
        return avg;
    }

    public static void main(String[] args) {
        double englishAvg = avg(t -> t.getEnglishScore());
        System.out.println("���� ��� ����: " + englishAvg);

        double mathAvg = avg(t -> t.getMathScore());
        System.out.println("���� ��� ����: " + mathAvg);
    }
}
