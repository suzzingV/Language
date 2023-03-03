package sec06.exam05;

public class PrintThread2 extends Thread{
    public void run() {
        try {
            while(true) {
                System.out.println("실행 중");
                Thread.sleep(1); //일시정지 상태일 때 interrupt 의미 있음
                //일시정지 상태일 때 InterruptedException 발생 -> while 문 빠져나옴
            }
        } catch (InterruptedException e) {
        }

        System.out.println("자원 정리");
        System.out.println("실행 종료");
    }
}
