package sec06.exam02;

public class YieldExample {
    public static void main(String[] args) {
        ThreadA threadA = new ThreadA();
        ThreadB threadB = new ThreadB();

        threadA.start();
        threadB.start();

        try { Thread.sleep(3000); } catch (InterruptedException e) {}
        threadA.work = false; //ThreadB�� ����

        try { Thread.sleep(3000); } catch (InterruptedException e) {}
        threadA.work = true; //ThreadA, ThreadB ��� ����
        
        try { Thread.sleep(3000); } catch (InterruptedException e) {}
        threadA.stop = true;
        threadB.stop = true;

    }
}
