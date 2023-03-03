package sec07;

public class DaemonExample {
    public static void main(String[] args) {
        AutoSaveThread autoSaveThread = new AutoSaveThread();
        autoSaveThread.setDaemon(true); //스레드.setDaemon(true) : 데몬스레드로 만듦
        autoSaveThread.start(); //setDaemon보다 start 먼저하면 IllegalThreadStateException 발생

        try {
            Thread.sleep(3000);
        } catch(InterruptedException e) {
        }
        System.out.println("메인 스레드 종료");
    }
}
