package sec06.exam05;

public class PrintThread3 extends Thread {
    public void run() {
        while(true) {
            System.out.println("���� ��");
            if(Thread.interrupted()) { //Thread.interrupted() : ���� �޼ҵ�� ���� �����尡 interrupted�Ǿ����� Ȯ��
                break;
            }
        }

        System.out.println("�ڿ� ����");
        System.out.println("���� ����");
    }
}
