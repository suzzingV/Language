package CarThis;

public class Car {
    String company = "현대자동차";
    String model;
    String color;
    int maxSpeed;

    Car() {
    }
    
    Car(String model) {
        this(model, "은색", 250); //다른 생성자 호출 //그 생성자의 형식에 맞춰 써야함 //생성자의 첫 줄에서만 허용
        //this.model = model;
        //this.color = "은색";
        //this.maxSpeed = 250;
    }

    Car(String model, String color) {
        this(model, color, 250);
        //this.model = model;
        //this.color = color;
        //this.maxSpeed = 250;
    }

    Car(String model, String color, int maxSpeed) {
        this.model = model;
        this.color = color;
        this.maxSpeed = maxSpeed; //공통 실행 코드
    }
}
