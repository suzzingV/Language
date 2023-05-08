package sec7.exam05;

public class DriverExample {
    public static void main(String[] args) {
        Driver driver = new Driver();

        Bus bus = new Bus();
        Taxi taxi = new Taxi();
        
        driver.drive(bus); //원래 매개변수는 vehicle이어야 하지만 vehicle의 자식 클래스 대입하면 자동형변환 일어나서 오버라이딩 된 결과로 나옴
        driver.drive(taxi);
        //매개변수의 다형성
    }
}
