package sec05.exam01;

public class Car {
    Tire frontLeftTire = new HankookTire(); //인터페이스로 자동 타입변환
    Tire frontRightTire = new HankookTire();
    Tire backLeftTire = new HankookTire();
    Tire backRightTire = new HankookTire();

    void run() {
        frontLeftTire.roll();
        frontRightTire.roll();
        backLeftTire.roll();
        backRightTire.roll();
    }
}
