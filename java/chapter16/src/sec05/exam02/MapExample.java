package sec05.exam02;

import java.util.Arrays;
import java.util.List;

public class MapExample {
    public static void main(String[] args) {
        List<Student> studentList = Arrays.asList(
            new Student("홍길동", 10),
            new Student("신용권", 20),
            new Student("유미선", 30)
        );

        studentList.stream()
            .mapToInt(Student :: getScore) //각 객체의 매개값으로 얻은 int 뽑아냄
            .forEach(score -> System.out.println(score));
    }
}
