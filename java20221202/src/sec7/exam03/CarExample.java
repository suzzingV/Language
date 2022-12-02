package sec7.exam03;

public class CarExample {
    public static void main(String[] args) {
        Car car = new Car();
        
        for(int i = 0; i < 5; i++) {
            int problemLocation = car.run();

            switch(problemLocation) {
                case 1:
                    System.out.println("앞왼쪽 HankookTire로 교체");
                    car.frontLeftTire = new HankookTire("앞왼쪽", 15);
                    break;
                    //다 쓸 때마다 다른 HankookTire객체로 교체
                    //처음 말고는 오버라이딩된 roll() 실행
                    //accumulatedRotation은 부모클래스에서
                case 2:
                    System.out.println("앞오른쪽 KumhoTire로 교체");
                    car.frontRightTire = new KumhoTire("앞오른쪽", 13);
                    break;
                case 3:
                    System.out.println("뒤왼쪽 HankookTire로 교체");
                    car.backLeftTire = new HankookTire("뒤왼쪽", 14);
                    break;
                case 4:
                    System.out.println("앞오른쪽 KumhoTire로 교체");
                    car.frontRightTire = new KumhoTire("뒤오른쪽", 17);
                    break;
            }
            System.out.println("-------------------------------------------");
        }
    }
}
