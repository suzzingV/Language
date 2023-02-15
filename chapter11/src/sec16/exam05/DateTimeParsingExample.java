package sec16.exam05;

import java.time.format.DateTimeFormatter;
import java.time.LocalDate;

public class DateTimeParsingExample {
    public static void main(String[] args) {
        DateTimeFormatter formatter;
        LocalDate localDate;

        localDate = LocalDate.parse("2024-05-21");
        System.out.println(localDate);

        formatter = DateTimeFormatter.ISO_LOCAL_DATE;
        localDate = LocalDate.parse("2024-05-21", formatter);
        System.out.println(localDate);

        formatter = DateTimeFormatter.ofPattern("yyyy/MM/dd"); //LocalDate의 기본 형태는 yyyy-MM-dd
        //문자열 읽을 때 이런 형식으로 읽고 LocalDate형태로 집어넣는다
        localDate = LocalDate.parse("2024/05/21", formatter);
        System.out.println(localDate);

        formatter = DateTimeFormatter.ofPattern("yyyy.MM.dd");
        localDate = LocalDate.parse("2024.05.21", formatter);
        System.out.println(localDate);
    }
}
