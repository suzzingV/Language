package sec2.exam02;

import sec2.exam01.RemoteControl;

public class Television implements RemoteControl { //RemoteControl 인터페이스로 사용 가능
    private int volume;

    public void turnOn() {
        System.out.println("TV를 켭니다.");
    }

    //인터페이스의 모든 메소드는 기본적으로 public 접근 제한 갖기때문에 public보다 낮은 접근 제한으로 작성 불가
    //실체 메소드를 작성하지 않으면 구현 클래스는 자동으로 추상 클래스가 되므로 abstract 붙여줘야 함
    public void turnOff() {
        System.out.println("TV를 끕니다.");
    }

    public void setVolume(int volume) {
        if(volume > RemoteControl.MAX_VOLUME) {
            this.volume = RemoteControl.MAX_VOLUME;
        } else if(volume < RemoteControl.MIN_VOLUME) {
            this.volume = RemoteControl.MIN_VOLUME;
        } else {
            this.volume = volume;
        }
        System.out.println("현재 TV 볼륨: " + this.volume);
    }
}
