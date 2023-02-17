package sec02.exam03;

public class ThreadA extends Thread{
    public ThreadA() {
        setName("ThreadA"); //Thread에 있는 메소드 사용
        //setName(): 스레드 이름 바꾸기
    }
    
    public void run() {
        for(int i = 0; i < 2; i++) {
            System.out.println(getName() + "가 출력한 내용"); //getName(): 스레드 이름 얻기
        }
    }
}
