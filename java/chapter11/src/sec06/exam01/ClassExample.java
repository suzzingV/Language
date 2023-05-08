package sec06.exam01;

import java.lang.Class;
import sec03.exam04.깊은복제.*;

public class ClassExample {
    public static void main(String[] args) {
        Car car = new Car("현대");
        Class clazz1 = car.getClass(); //Class객체 얻기 //Object 클래스가 가지고 있는 getClass()메소드 이용
        //Object는 모든 클래스의 최상위 클래스이므로 모든 클래스에서 getClass() 호출 가능
        //해당 클래스로 객체를 생성했을 때만 사용 가능
        System.out.println(clazz1.getName());
        System.out.println(clazz1.getSimpleName());
        System.out.println(clazz1.getPackage().getName());

        try {
            Class clazz2 = Class.forName("sec06.exam01.Car");
            //객체 생성하기 전 Class 객체 얻기
            //Class는 생성자 감추고 있기 때문에 new 연산자로 객체 만들 수 없고 정적 메소드인 forName()이용해야 함
            //forName("클래스 전체 이름(패키지 포함")
            //클래스 못찾으면 ClassNotFoundException 예외 발생시켜 예외처리 필요
            System.out.println(clazz2.getName());
            System.out.println(clazz2.getSimpleName());
            System.out.println(clazz2.getPackage().getName());
        } catch (ClassNotFoundException e) {
            e.printStackTrace();
        }
    }
}
