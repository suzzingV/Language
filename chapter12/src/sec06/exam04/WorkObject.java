package sec06.exam04;

public class WorkObject {
    public synchronized void methodA() {
        System.out.println("ThreadA�� methodA() �۾� ����");
        notify(); //�Ͻ� ���� ���¿� �ִ� ThreadB�� ���� ��� ���·� ����
        try {
            wait();
        } catch (InterruptedException e) {
        }
    }
    
    public synchronized void methodB() {
        System.out.println("ThreadB�� methodB() �۾� ����");
        notify(); 
        try {
            wait();
        } catch(InterruptedException e) {
        }
    }
}
