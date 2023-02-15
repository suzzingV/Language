package sec15.exam02;

import java.text.SimpleDateFormat;
import java.util.Date;

public class SimpleDateFormatExample {
    public static void main(String[] args) {
        Date now = new Date();

        SimpleDateFormat sdf = new SimpleDateFormat("y-MM-dd"); //SimpleDateFormat: 날자 형식 클래스
        System.out.println(sdf.format(now)); //안에 Date클래스 넣음 //문자열
        
        sdf = new SimpleDateFormat("yyyy년 MM월 dd일");
        System.out.println(sdf.format(now));

        sdf = new SimpleDateFormat("yyyy.MM.dd a HH:mm:ss"); //a : 오전오후
        System.out.println(sdf.format(now));
        
        sdf = new SimpleDateFormat("오늘은 E요일"); //E: 요일
        System.out.println(sdf.format(now));

        sdf = new SimpleDateFormat("올해의 D번째 날"); //D: 월 구분 없는 일
        System.out.println(sdf.format(now));

        sdf = new SimpleDateFormat("이달의 d번째 날");
        System.out.println(sdf.format(now));
    }
}
