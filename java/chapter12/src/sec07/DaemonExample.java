package sec07;

public class DaemonExample {
    public static void main(String[] args) {
        AutoSaveThread autoSaveThread = new AutoSaveThread();
        autoSaveThread.setDaemon(true); //������.setDaemon(true) : ���󽺷���� ����
        autoSaveThread.start(); //setDaemon���� start �����ϸ� IllegalThreadStateException �߻�

        try {
            Thread.sleep(3000);
        } catch(InterruptedException e) {
        }
        System.out.println("���� ������ ����");
    }
}
