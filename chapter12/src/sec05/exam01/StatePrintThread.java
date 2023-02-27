package sec05.exam01;

public class StatePrintThread extends Thread {
        private Thread targetThread;

        public StatePrintThread(Thread targetThread) {
            this.targetThread = targetThread;
        }

        public void run() {
            while(true) {
                Thread.State state = targetThread.getState(); // ������.getState(): ������ ���� ���� ����� ���
                System.out.println("Ÿ�� ������ ����: " + state);
                
                if(state == Thread.State.NEW) {
                    targetThread.start();
                }

                if(state == Thread.State.TERMINATED) {
                    break;
                }
                try {
                    Thread.sleep(1500);
                } catch(Exception e) {}
            }
        }
}
