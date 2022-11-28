public class CarInstance {
    String model;
    int speed;

    CarInstance(String model) { //클래스에 매개변수
        this.model = model;
    }

    void setSpeed(int speed) {
        this.speed = speed;
    }

    void run() {
        for(int i = 10; i <= 50; i+=10) {
            this.setSpeed(i); 
            System.out.println(this.model + "가 달립니다.(시속)" + this.speed + "km/h");
        }
    }
}
//인스턴스 필드는 객체마다 따로 존재하고 인스턴스 메소드는 객체마다 존재하지 않고 메소드 영역에 저장되고 공유