package sec16.exam03;

import java.time.LocalDateTime;
import java.time.temporal.TemporalAdjuster;
import java.time.temporal.TemporalAdjusters;
import java.time.DayOfWeek;

import javax.xml.transform.Templates;

public class DateTimeChangeExample {
    public static void main(String[] args) {
        LocalDateTime now = LocalDateTime.now();
        System.out.println("현재: " + now);

        LocalDateTime targetDateTime = now
            .withYear(2024) //withYear(int): 년도 변경
            .withMonth(10)
            .withDayOfMonth(5)
            .withHour(13)
            .withMinute(30)
            .withSecond(20);
        System.out.println("직접 변경: " + targetDateTime);

        targetDateTime = now.with(TemporalAdjusters.firstDayOfYear()); //날짜시간객체.with(TemporalAdjuster.메소드): 현재 날짜 기준으로 상대적 날짜 리턴
        System.out.println("이번 해의 첫 일: " + targetDateTime);
        targetDateTime = now.with(TemporalAdjusters.lastDayOfYear());
        System.out.println("이번 해의 마지막 일: " + targetDateTime);
        targetDateTime = now.with(TemporalAdjusters.firstDayOfNextYear());
        System.out.println("다음 해의 첫 일: " + targetDateTime);
        targetDateTime = now.with(TemporalAdjusters.firstDayOfMonth());
        System.out.println("이번 달의 첫 일: " + targetDateTime);
        targetDateTime = now.with(TemporalAdjusters.lastDayOfMonth());
        System.out.println("이번 달의 마지막 일: " + targetDateTime);
        targetDateTime = now.with(TemporalAdjusters.firstDayOfNextMonth());
        System.out.println("다음 달의 첫 일: " + targetDateTime);
        targetDateTime = now.with(TemporalAdjusters.firstInMonth(DayOfWeek.MONDAY)); //매개값 DayOfWeek
        System.out.println("이번 달의 첫 월요일: " + targetDateTime);
        targetDateTime = now.with(TemporalAdjusters.next(DayOfWeek.MONDAY)); //오늘 포함 안함 오늘 포함하려면 nextOrSame
        System.out.println("돌아오는 월요일: " + targetDateTime);
        targetDateTime = now.with(TemporalAdjusters.previous(DayOfWeek.MONDAY)); //오늘 포함 안함 하려면 previousOrSame
        System.out.println("지난 월요일: " + targetDateTime);
    }
}
