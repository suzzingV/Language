package sec06.exam02;

public class ThreadA {
    public boolean work = true;
    public boolean stop = false;

    public void run() {
        while(!stop) {
            if(work) {
                System.out.println("ThreadA �۾� ����");
            } else {
                Thread.yield(); //�ٸ� �����忡�� ���� �纸
            }
        }
        System.out.println("ThreadA ����");
    }
}
