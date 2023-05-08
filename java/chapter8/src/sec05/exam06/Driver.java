package sec05.exam06;

import sec05.exam05.*;

public class Driver {
    public void drive(Vehicle vehicle) {
        if(vehicle instanceof Bus) { //vehicle이 원래 Bus였니? //조건 안 걸어주면 Bus가 아닌 다른 구현객체 들어오면 에러뜸
            Bus bus = (Bus) vehicle; //구현객체에 있는 메소드 사용하려면 강제 타입변환해서 사용
            bus.checkFare();
        }
        vehicle.run();
    }
}
