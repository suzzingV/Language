package sec06.exam04;

public class WaitNotifyExample {
    public static void main(String[] args) {
        WorkObject shareObject = new WorkObject();

        ThreadA threadA = new ThreadA(shareObject);
        ThreadB threadB = new ThreadB(shareObject);
        
        threadA.start();
        threadB.start();
        //끝나면 B는 일시정지로 있기 때문에 끝 안남
    }
}
