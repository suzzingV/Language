package sec14.exam01;

import java.text.SimpleDateFormat;
import java.util.Date;

public class DateExample {
    public static void main(String[] args) {
        Date now = new Date(); //Date() 생성자: 컴퓨터의 현재 날짜를 읽어 Date 객체로 만듦
        String strNow1 = now.toString();
        System.out.println(strNow1);

        SimpleDateFormat sdf = 
            new SimpleDateFormat("yyyy년 MM월 dd일 hh시 mm분 ss초"); //특정 문자열 포맷으로 얻기
        String strNow2 = sdf.format(now); //sdf의 형태로 now의 시간 문자열로 얻기
        System.out.println(strNow2);
    }
}
