package sec06.exam03;

public class JoinExample {
    public static void main(String[] args) {
        SumThread sumThread = new SumThread();
        sumThread.start();

        try {
            sumThread.join(); //������.join(): ������ ����Ǵ� ���� ���ν����� �Ͻ�����
        } catch (InterruptedException e) {
        } //�̰� ������ 0 ����� ������ ������ ���� ����ϱ� ����

        System.out.println("1~100 ��: " + sumThread.getSum());
    }
}
