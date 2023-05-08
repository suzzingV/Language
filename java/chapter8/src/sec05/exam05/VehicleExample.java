package sec05.exam05;

public class VehicleExample {
    public static void main(String[] args) {
        Vehicle vehicle = new Bus(); //자동타입변환

        vehicle.run(); //인터페이스에 선언된 메소드만 사용 가능
        //vehicle.checkFare(); //불가능

        Bus bus = (Bus) vehicle; //강제 타입 변환 //인터페이스화 된 구현클래스만 가능
        
        bus.run();
        bus.checkFare();
        
    }
}
