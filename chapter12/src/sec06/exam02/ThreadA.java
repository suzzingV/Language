package sec06.exam02;

public class ThreadA extends Thread {
    public boolean work = true;
    public boolean stop = false;

    public void run() {
        while(!stop) {
            if(work) {
                System.out.println("ThreadA 작업 내용");
            } else {
                Thread.yield(); //다른 스레드에게 실행 양보
            }
        }
        System.out.println("ThreadA 종료");
    }
}
