package sec05.exam02;

public class AnonymousExample {
    public static void main(String[] args) {
        Anonymous anony = new Anonymous();
        
        anony.field.turnOn(); //익명 객체 필드 사용
        anony.method1();
        anony.method2(
            new RemoteControl() { //매개값으로 사용
            @Override
            public void turnOn() {
                System.out.println("SmartTV를 켭니다.");
            }
            @Override
            public void turnOff() {
                System.out.println("SmartTV를 끕니다.");
            }
        });
    }
}
