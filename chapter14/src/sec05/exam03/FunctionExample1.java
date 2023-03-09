package exam03;

import java.util.Arrays;
import java.util.function.*;

public class FunctionExample1 {
    public static List<Student> list = Arrays.asList(
        new Student("홍길동", 90, 96);
        new Student("신용권", 95, 93);
    );

    public static void printString(Function<Student, String> function) {
        for(Student student: list) {
            System.out.println(function.apply(student) + " ");
        }
        System.out.println();
    }

    public static void printInt(ToIntFunction<Student> function) {
        for(Student student: list) {
            System.out.println(function.applyAsInt(student) + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        System.out.println("[학생 이름]");
        printString( t -> return t.getName(););

        System.out.println("[영어 점수]");
        printInt(t -> return getEnglishScore(););
        
        System.out.println("[수학 점수]");
        printInt(t -> return getMathScore(););
    }
}
