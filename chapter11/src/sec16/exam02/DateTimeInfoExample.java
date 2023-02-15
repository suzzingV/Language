package sec16.exam02;

import java.time.*;

public class DateTimeInfoExample {
    public static void main(String[] args) {
        LocalDateTime now = LocalDateTime.now();
        System.out.println(now);

        String strDateTime = now.getYear() + "년 "; //LocalDateTime객체.getYear(): 년에 대한 정보 int로
        //int+String = String
        strDateTime += now.getMonthValue() + "월 ";
        strDateTime += now.getDayOfMonth() + "일 ";
        System.out.println(now.getMonth());
        //getMonth()는 Month열거값 반환
        strDateTime += now.getDayOfWeek() + " "; //DayOfWeek 반환
        strDateTime += now.getHour() + "시 ";
        strDateTime += now.getMinute() + "분 ";
        strDateTime += now.getSecond() + "초 ";
        strDateTime += now.getNano() + "나노초";
        System.out.println(strDateTime + "\n");
        
        LocalDate nowDate = now.toLocalDate(); //LocalDate 객체로 변환
        if(nowDate.isLeapYear()) { //isLeapYear()는 LocalDate만 사용 가능
            System.out.println("올해는 윤년: 2월은 29일까지 있습니다. \n");
        } else {
            System.out.println("올해는 평년: 2월 28일까지 있습니다.");
        }

        ZonedDateTime utcDateTime = ZonedDateTime.now(ZoneId.of("UTC"));
        System.out.println("협정 시계시: " + utcDateTime);
        ZonedDateTime seoulDateTime = ZonedDateTime.now(ZoneId.of("Asia/Seoul"));
        System.out.println("서울 타임존: " + seoulDateTime);
        ZoneId seoulZoneId = seoulDateTime.getZone(); //ZonedDateTime객체.getZone(): 존아이디 얻기
        System.out.println("서울 존아이디: " + seoulZoneId);
        ZoneOffset seoulZoneOffset = seoulDateTime.getOffset(); //ZonedDateTime객체.getOffset(): 존오프셋 얻기
        System.out.println("서울 존오프셋: " + seoulZoneOffset);
    }
}
