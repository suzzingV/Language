package sec06.exam05;

public class PrintThread3 extends Thread {
    public void run() {
        while(true) {
            System.out.println("실행 중");
            if(Thread.interrupted()) { //Thread.interrupted() : 정적 메소드로 현재 스레드가 interrupted되었는지 확인
                break;
            }
        }

        System.out.println("자원 정리");
        System.out.println("실행 종료");
    }
}
