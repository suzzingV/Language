package sec16.exam05;

import java.time.format.DateTimeFormatter;
import java.time.LocalDateTime;

public class DateTimeFormatExample {
    public static void main(String[] args) {
        LocalDateTime now = LocalDateTime.now();
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("yyyy년 M월 d일 a h시 m분");
        String nowString = now.format(formatter);
        System.out.println(nowString);
    }
}
