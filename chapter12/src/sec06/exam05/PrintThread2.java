package sec06.exam05;

public class PrintThread2 extends Thread{
    public void run() {
        try {
            while(true) {
                System.out.println("���� ��");
                Thread.sleep(1); //�Ͻ����� ������ �� interrupt �ǹ� ����
                //�Ͻ����� ������ �� InterruptedException �߻� -> while �� ��������
            }
        } catch (InterruptedException e) {
        }

        System.out.println("�ڿ� ����");
        System.out.println("���� ����");
    }
}
