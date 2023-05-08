package sec03.exam03;

import java.util.Date;

public class ToStringExample {
    public static void main(String[] args) {
        Object obj1 = new Object();
        Date obj2 = new Date();
        System.out.println(obj1.toString()); //Object의 toString은 객체의 문자정보 리턴 //클래스명@16진수해시코드
        System.out.println(obj2.toString()); //Date는 오버라이딩해서 현재 시스템의 날짜, 시간정보 리턴
    }
}
