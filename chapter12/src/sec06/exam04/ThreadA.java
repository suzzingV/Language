package sec06.exam04;

public class ThreadA extends Thread {
    private WorkObject workObject;

    public ThraedA(WorkObject workObject) {
        this.workObject = workObject;
    }

    @Override
    public void run() {
        for(int i = 0; i < 10; i++) {
            workObject.methodA();
        }
    }
}
