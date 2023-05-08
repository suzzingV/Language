package sec8.exam01;

public class PhoneExample {
    public static void main(String[] args) {
    //Phone phone = new Phone(); //추상 클래스는 직접 생성자 호출 불가
    SmartPhone smartPhone = new SmartPhone("임수진");
    
    smartPhone.turnOn();
    smartPhone.internetSearch();
    smartPhone.turnOff();
    }
}
