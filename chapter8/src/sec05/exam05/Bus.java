package sec05.exam05;

public class Bus implements Vehicle {
    @Override
    public void run() {
        System.out.println("버스가 달립니다.");
    }

    public void checkFare() { //인터페이스에 선언된 메소드 아니므로 인터페이스화되면 사용 불가
        System.out.println("승차요금을 체크합니다.");
    }
}
