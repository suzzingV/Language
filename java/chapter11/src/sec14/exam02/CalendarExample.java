package sec14.exam02;

import java.util.Calendar;

public class CalendarExample {
    public static void main(String[] args) {
        Calendar now = Calendar.getInstance(); //운영체제에 설정되어 있는 시간대를 기준으로 한 Calendar 하위객체
        
        int year = now.get(Calendar.YEAR); //get(): 날짜, 시간 정보 읽기, 매개값은 Calendar클래스에 선언되어 있는 상수
        int month = now.get(Calendar.MONTH);
        int day = now.get(Calendar.DAY_OF_MONTH);
        
        int week = now.get(Calendar.DAY_OF_WEEK); //int 형태로 반환됨
        String strWeek = null;
        switch(week) {
            case Calendar.MONDAY: //int형태임
                strWeek = "월";
                break;
            case Calendar.TUESDAY:
                strWeek = "화";
                break;
            case Calendar.WEDNESDAY:
                strWeek = "수";
                break;
            case Calendar.THURSDAY:
                strWeek = "목";
                break;
            case Calendar.FRIDAY:
                strWeek = "금";
                break;
            case Calendar.SATURDAY:
                strWeek = "토";
                break;
            default:
                strWeek = "일";
        }
            
            int amPm = now.get(Calendar.AM_PM);
            String strAmPm = null;
            if(amPm == Calendar.AM) {
                strAmPm = "오전";
            } else {
                strAmPm = "오후";
            }

            int hour = now.get(Calendar.HOUR);
            int minute = now.get(Calendar.MINUTE);
            int second = now.get(Calendar.SECOND);

            System.out.print(year + "년 ");
            System.out.print(month + "월 ");
            System.out.println(day + "일 ");
            System.out.print(strWeek + "요일 ");
            System.out.println(strAmPm + " ");
            System.out.print(hour + "시 ");
            System.out.print(minute + "분 ");
            System.out.println(second + "초 ");
    }
}
