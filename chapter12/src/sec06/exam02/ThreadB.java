package sec06.exam02;

public class ThreadB {
    public boolean work = true;
    public boolean stop = false;

    while(!stop) {
        if(work) {
            System.out.println("ThreadB �۾� ����");
        } else {
            Thread.yield();
        }
    }
    System.out.println("ThreadB ����");
}
