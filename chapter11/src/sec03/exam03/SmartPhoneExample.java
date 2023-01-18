package sec03.exam03;

public class SmartPhoneExample {
    public static void main(String[] args) {
        SmartPhone myPhone = new SmartPhone("구글", "안드로이드");

        String strObj = myPhone.toString();
        System.out.println(strObj);
        System.out.println(myPhone); //System.out.println에 기본타입이 아닌 객체를 넣으면 toString()메소드 호출해서 리턴값 받아 출력
    }
}
