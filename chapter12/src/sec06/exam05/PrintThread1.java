package sec06.exam05;

public class PrintThread1 extends Thread {
    private boolean stop; //초기화 안하면 기본값 false

    public void setStop(boolean stop) {
        this.stop = stop;
    }

    public void run() {
        while(!stop) {
            System.out.println("실행 중");
        }
        System.out.println("자원 정리");
        System.out.println("실행 종료");
    }
}
