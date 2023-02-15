package sec16.exam04;

import java.time.LocalDateTime;
import java.time.Period;
import java.time.temporal.ChronoUnit;
import java.time.Duration;

public class DateTimeCompareExample {
    public static void main(String[] args) {
        LocalDateTime startDateTime = LocalDateTime.of(2023, 1, 1, 9, 0, 0);
        System.out.println("시작일: " + startDateTime);

        LocalDateTime endDateTime = LocalDateTime.of(2024, 3, 31, 18, 0, 0);
        System.out.println("종료일: " + endDateTime + "\n");

        if(startDateTime.isBefore(endDateTime)) {
            System.out.println("진행 중입니다.");
        } else if(startDateTime.isEqual(endDateTime)) {
            System.out.println("종료합니다.");
        } else {
            System.out.println("종료했습니다.");
        }
        System.out.println();

        System.out.println("[종료까지 남은 시간]");
        long remainYear = startDateTime.until(endDateTime, ChronoUnit.YEARS); //startDateTime부터 endDateTime까지 연도 차이
        long remainMonth = startDateTime.until(endDateTime, ChronoUnit.MONTHS);
        long remainDay = startDateTime.until(endDateTime, ChronoUnit.DAYS);
        long remainHour = startDateTime.until(endDateTime, ChronoUnit.HOURS);
        long remainMinute = startDateTime.until(endDateTime, ChronoUnit.MINUTES);
        long remainSecond = startDateTime.until(endDateTime, ChronoUnit.SECONDS);

        
        remainYear = ChronoUnit.YEARS.between(startDateTime, endDateTime); //전체 차이
        remainMonth = ChronoUnit.MONTHS.between(startDateTime, endDateTime);
        remainDay = ChronoUnit.DAYS.between(startDateTime, endDateTime);
        remainHour = ChronoUnit.HOURS.between(startDateTime, endDateTime);
        remainMinute = ChronoUnit.MINUTES.between(startDateTime, endDateTime);
        remainSecond = ChronoUnit.SECONDS.between(startDateTime, endDateTime);
        
        System.out.println("남은 해: " + remainYear);
        System.out.println("남은 달: " + remainMonth);
        System.out.println("남은 일: " + remainDay);
        System.out.println("남은 시간: " + remainHour);
        System.out.println("남은 분: " + remainMinute);
        System.out.println("남은 초: " + remainSecond);

        System.out.println("[종료까지 남은 기간]");
        Period period =
        Period.between(startDateTime.toLocalDate(), endDateTime.toLocalDate()); //Period.between의 매개변수는 무조건 LocalDate
        System.out.print("남은 기간: " + period.getYears() + "년 ");
        System.out.print(period.getMonths() + "달 ");
        System.out.print(period.getDays() + "일 ");
        System.out.println();

        Duration duration =
        Duration.between(startDateTime.toLocalTime(), endDateTime.toLocalTime()); //Duration.between의 매개변수는 무조건 LocalTime
        System.out.println("남은 초: " + duration.getSeconds());
    }
}
