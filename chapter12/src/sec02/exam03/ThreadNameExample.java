package sec02.exam03;

public class ThreadNameExample {
    public static void main(String[] args) {
        Thread mainThread = Thread.currentThread(); //Thread.currentThread(): 현재 스레드의 참조
        System.out.println("프로그램 시작 스레드 이름: " + mainThread.getName());
        
        ThreadA threadA = new ThreadA();
        System.out.println("작업 스레드 이름: " + threadA.getName());
        threadA.start();

        ThreadB threadB = new ThreadB();
        System.out.println("작엄 스레드 이름: " + threadB.getName());
        threadB.start();
    }
}
