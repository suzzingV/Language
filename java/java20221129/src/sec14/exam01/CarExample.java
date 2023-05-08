package sec14.exam01;

public class CarExample {
    public static void main(String[] args) {
    sec14.exam01.Car myCar = new Car();

    myCar.setSpeed(-50);

    System.out.println("현재 속도: " + myCar.getSpeed());

    myCar.setSpeed(60);

    if(!myCar.isStop()) {
        myCar.setStop(true);
    }

    System.out.println("현재 속도: " + myCar.getSpeed());
    }
}
