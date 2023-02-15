package sec16.exam03;

import java.time.*;

public class DateTimeOperationExample {
    public static void main(String[] args) {
        LocalDateTime now = LocalDateTime.now();
        System.out.println("현재시: " + now);

        LocalDateTime targetDateTime = now
            .plusYears(1) //도트 연산자로 연결해서 순차적으로 호출 가능 //LocalDateTime 반환
            .minusMonths(2)
            .plusDays(3)
            .plusHours(4)
            .minusMinutes(5)
            .plusSeconds(6);
        System.out.println("연산 후: " + targetDateTime);
    }
}
