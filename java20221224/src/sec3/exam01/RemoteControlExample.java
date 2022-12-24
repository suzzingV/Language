package sec3.exam01;

import sec2.exam01.RemoteControl;

public class RemoteControlExample {
    public static void main(String[] args) {
        RemoteControl rc; //구현 객체 사용 방법
        rc = new Television(); //객체의 번지수 저장
        rc = new Audio();
    }
}
