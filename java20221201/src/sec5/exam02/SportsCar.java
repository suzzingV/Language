package sec5.exam02;

public class SportsCar extends Car {
    @Override
    public void speedUp() { speed += 10; }

    @Override
    public void stop() { //final 붙은 메소드기 때문에 오버라이딩 안됨
        System.out.println("스포츠카를 멈춤");
        speed = 0;
    }
}
