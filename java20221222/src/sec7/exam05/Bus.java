package sec7.exam05;

public class Bus extends Vehicle {
    @Override //자식 클래스에서 오버라이딩한 결과로 나옴
    public void run() {
        System.out.println("버스가 달립니다.");
    }
}
