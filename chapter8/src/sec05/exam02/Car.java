package sec05.exam02;

import sec05.exam01.*;

public class Car {
    Tire[] tires = { //인터페이스 배열
        new HankookTire(),
        new HankookTire(),
        new HankookTire(),
        new HankookTire()
    };

    void run() {
        for(Tire tire : tires) { //for(타입 변수 : 배열) : 배열 끝까지 변수에 배열요소 넣어서 반복문 돌림
            tire.roll();
        }
    }
}
