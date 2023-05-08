package sec06.exam02;

public class ThreadB extends Thread {
    public boolean work = true;
    public boolean stop = false;

    public void run() {
    while(!stop) {
        if(work) {
            System.out.println("ThreadB 작업 내용");
        } else {
            Thread.yield();
        }
    }
    System.out.println("ThreadB 종료");
}
}
