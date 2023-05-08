package sec3.exam02;

import sec2.exam01.RemoteControl;

public class RemoteControlExample {
    public static void main(String[] args) {
        RemoteControl rc = new RemoteControl() {
            public void turnOn() {
                /*실행문*/
            }
            public void turnOff() {/*실행문 */}
            public void setVolume(int volume) {/*실행문 */}
        };
        //컴파일 하면 클래스 생성됨 //RemoteControlExample$1
    }
}
