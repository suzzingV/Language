package sec16.exam01;

import java.time.*;
import java.time.temporal.ChronoUnit;
import java.lang.Thread;

public class DateTimeCreateExample {
    public static void main(String[] args) throws InterruptedException {
        LocalDate currDate = LocalDate.now(); //LocalDate.now(): 컴퓨터의 현재 날짜 정보 저장한 LocalDate객체 리턴
        System.out.println("현재 날짜: " + currDate);

        LocalDate targetDate = LocalDate.of(2024, 5, 10); //LocalDate.of(년, 월, 일): 매개값으로 주어진 날짜 정보 저장한 객체 리턴
        //반드시 모든 매개값 있어야 함
        //리턴값 문자열 아님
        System.out.println("목표 날짜: " + targetDate);

        LocalTime currTime = LocalTime.now();
        System.out.println("현재 시간: " + currTime);

        LocalTime targetTime = LocalTime.of(6, 30, 0, 0);
        System.out.println("목표 시간: " + targetTime);

        LocalDateTime currDateTime = LocalDateTime.now();
        System.out.println("현재 날짜와 시간: " + currDateTime);

        LocalDateTime targetDateTime = LocalDateTime.of(2024, 5, 10, 6, 30, 0, 0);
        System.out.println("목표 날짜와 시간: " + targetDateTime);

        ZonedDateTime utcDateTime = ZonedDateTime.now(ZoneId.of("UTC")); //ZonedDateTime.now(ZonedId.of(원하는 시간대)): 타임존의 날짜와 시간 저장
        //맨 뒤에 타임존에 대한 정보(+-존오프셋[존아이디]) 추가적으로 붙음
        //존오프셋: 협정시계시와 차이나는 시간
        System.out.println("협정시계시: " + utcDateTime);
        ZonedDateTime newyorkDateTime = ZonedDateTime.now(ZoneId.of("America/New_York"));
        System.out.println("뉴욕 시간존: " + newyorkDateTime);

        Instant instant1 = Instant.now(); //특정 시점의 타임스탬프
        //특정한 두 시점 간의 시간적 우선순위 따질 때
        //Date()와 유사하지만 이건 협정 시계시 사용
        Thread.sleep(10); //Thread.sleep(시간): 주어진 시간동안 스레드 일시정지, 다시 실행 대기 상태로 돌아감
        //밀리세컨드 단위
        //일시 정지 상태에서 주어진 시간이 되기 전에 interrupt()메소드 호출되면 InterruptedException 발생해 예외처리 필요
        Instant instant2 = Instant.now();
        if(instant1.isBefore(instant2)) { //Instant객체.isBefore/isAfter(Instant 객체): 시간 순서 비교
            System.out.println("instant1이 빠릅니다.");
        } else if(instant1.isAfter(instant2)) {
            System.out.println("instant1이 늦습니다.");
        } else {
            System.out.println("동일한 시간입니다.");
        }
        System.out.println("차이(nanos): " + instant1.until(instant2,ChronoUnit.NANOS));
        //instant객체.until(instant객체, ): 두 시점간 차이
    }
}
