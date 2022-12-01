package sec5.exam02;

public class Car {
    public int speed;

    public void speedUp() { speed += 1; }

    public final void stop() { //메소드에 final 붙으면 오버라이딩 할 수 없음
        System.out.println("차를 멈춤");
        speed = 0;
    }
}
