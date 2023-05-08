package sec01.exam02;

import java.util.List;
import java.util.*;
import java.util.stream.*;

public class LamdaExpressionExample {
    public static void main(String[] args) {
        List<Student> list = Arrays.asList(
            new Student("ȫ�浿", 90),
            new Student("�ſ��", 92)
        );
        
        Stream<Student> stream = list.stream();
        stream.forEach(s -> {
            String name = s.getName();
            int score = s.getScore();
            System.out.println(name + "-" + score);
        });
    }
}
