public class Caution {
    int speed;

    void run() {
        System.out.println(speed + "으로 달립니다.");
    }
 
     public static void main(String[] args) { //main도 정적 메소드이다. 따라서 안에 인스턴스 멤버 사용 불가
        Caution myCar = new Caution();
        myCar.speed = 60;
        myCar.run();
    }
}
