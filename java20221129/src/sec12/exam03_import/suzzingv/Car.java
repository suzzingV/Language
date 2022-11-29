package sec12.exam03_import.suzzingv;

import sec12.exam03_import.hankook.*; //import.*하면 하위 패키지는 포함 안됨s
import sec12.exam03_import.hyundai.*;
import sec12.exam03_import.kumho.*;

public class Car {
    Engine engine = new Engine();
    SnowTire tire1 = new SnowTire();
    BigWidthTire tire2 = new BigWidthTire();
    sec12.exam03_import.hankook.Tire tire3 = new sec12.exam03_import.hankook.Tire(); //같은 이름의클래스가 다른 패키지에 있을땐 패키지 이름 다 붙여줘야 함
    sec12.exam03_import.kumho.Tire tire4 = new sec12.exam03_import.kumho.Tire();
}
