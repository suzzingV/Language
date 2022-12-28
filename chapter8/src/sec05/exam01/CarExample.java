package sec05.exam01;

public class CarExample {
    public static void main(String[] args) {
        Car myCar = new Car();

        myCar.run();

        myCar.frontLeftTire = new KumhoTire();
        myCar.frontRightTire = new KumhoTire(); //구현객체 갈아끼울 수 있다(다른 조건 다 똑같은)
        
        myCar.run();
    }
}
