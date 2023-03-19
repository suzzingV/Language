package sec09.exam02;

import java.util.List;
import java.util.OptionalDouble;
import java.util.*;

public class OptionalExample {
    public static void main(String[] args) {
        List<Integer> list = new ArrayList<>();

        /*
        double avg = list.stream()
            .mapToInt(Integer :: intValue)
            .average()
            .getAsDouble();
        //抗寇 惯积
        */

        OptionalDouble optional = list.stream()
            .mapToInt(Integer :: intValue)
            .average();
        if(optional.isPresent()) {
            System.out.println("规过1_乞闭: " + optional.getAsDouble());
        } else {
            System.out.println("规过1_乞闭: " + 0.0);
        }

        double avg = list.stream()
            .mapToInt(Integer :: intValue)
            .average()
            .orElse(0.0);
        System.out.println("规过2_乞闭: " + avg);

        list.stream()
            .mapToInt(Integer :: intValue)
            .average()
            .ifPresent(a -> System.out.println("规过3_乞闭: " + a));
    }
}
