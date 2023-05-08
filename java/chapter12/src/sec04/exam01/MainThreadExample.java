package sec04.exam01;

public class MainThreadExample{
    public static void main(String[] args) {
        Calculator calculator = new Calculator();

        User1 user1 = new User1();
        user1.setCalculator(calculator);//공유객체 설정
        user1.start(); //user1스레드 시작

        User2 user2 = new User2();
        user2.setCalculator(calculator);
        user2.start(); //user1 스레드 멈춘동안 실행
    }
}