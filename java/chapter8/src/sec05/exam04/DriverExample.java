package sec05.exam04;

public class DriverExample {
    public static void main(String[] args) {
        Driver driver = new Driver();

        Bus bus = new Bus();
        Taxi taxi = new Taxi();

        driver.drive(bus); //구현 클래스의 인터페이스화
        driver.drive(taxi);
    }
}
