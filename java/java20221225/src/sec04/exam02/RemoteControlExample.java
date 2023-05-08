package sec04.exam02;

import sec04.exam01.*;

public class RemoteControlExample {
    public static void main(String[] args) {
        RemoteControl rc = null;

        rc = new Television();
        rc.turnOn();
        rc.setMute(true); //객체가 있어야 디폴트 메소드 쓸 수 있음

        rc = new Audio();
        rc.turnOn();
        rc.setMute(true); //오버라이딩 된 거로 됨
    }
}
