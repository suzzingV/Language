package sec04.exam01;

public class RemoteControlExample {
    public static void main(String[] args) {
        RemoteControl rc = null;

        rc = new Television(); //객체의 번지수 저장
        rc.turnOn();
        rc.turnOff();
        
        rc = new Audio();
        rc.turnOn();
        rc.turnOff();
    }
}
