package sec07.exam02;

public class StringEqualsExample {
    public static void main(String[] args) {
        String strVar1 = new String("신민철");
        String strVar2 = "신민철";
        //자바는 문자열 리터럴이 동일하다면 동일한 String 객체 참조하도록 되어있음
        //하지만 new 연산자로 생성된 객체는 다른 객체
        //원래 equals()는 Object의 번지비교 메소드이지만 String클래스가 오버라이딩해서 문자열 비교하도록 변경
         
        if(strVar1 == strVar2) {
            System.out.println("같은 String 객체 참조");
        } else {
            System.out.println("다른 String 객체 참조");
        }

        if(strVar1.equals(strVar2)) {
            System.out.println("같은 문자열 가짐");
        } else {
            System.out.println("다른 문자열 가짐");
        }
    }
}
