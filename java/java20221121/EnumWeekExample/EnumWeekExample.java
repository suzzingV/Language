package EnumWeekExample;

import java.util.Calendar; //날짜,요일, 시간 사용 클래스

public class EnumWeekExample {
    public static void main(String[] args) {
        Week today = null; //열거타입 변수 선언 //열거상수는 객체 //열거타입도 참조타입이기 때문에 null저장 가능

        Calendar cal = Calendar.getInstance(); //Calendar 변수 선언하고 Calendar.getInstance 메소드가 리턴하는 Calendar 객체 얻음
        int week = cal.get(Calendar.DAY_OF_WEEK); //일(1) ~ 토(7)까지의 숫자 리턴
        
        switch(week) {
            case 1:
                today = Week.SUNDAY; break; //열거타입 변수 = 열거타입.열거상수
            case 2:
                today = Week.MONDAY; break;
            case 3:
                today = Week.TUESDAY; break;
            case 4:
                today = Week.WEDNESDAY; break;
            case 5:
                today = Week.THURSDAY; break;
            case 6:
                today = Week.FRIDAY; break;
            case 7:
                today = Week.SATURDAY; break;
        }

        System.out.println("오늘 요일: " + today);

        if(today == Week.SUNDAY) {
            System.out.println("일요일에는 축구를 합니다.");
        } else {
            System.out.println("열심히 자바 공부합니다.");
        }
    }
}
//메소드 영역에 SUNDAY 번지수
//스택 영역에 today 번지수
//힙 영역에 Week객체에 SUNDAY
//메소드 영역에서 주소 복사해서 스택영역에