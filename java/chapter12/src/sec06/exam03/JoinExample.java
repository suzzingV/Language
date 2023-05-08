package sec06.exam03;

public class JoinExample {
    public static void main(String[] args) {
        SumThread sumThread = new SumThread();
        sumThread.start();

        try {
            sumThread.join(); //스레드.join(): 스레드 종료되는 동안 메인스레드 일시정지
        } catch (InterruptedException e) {
        } //이거 없으면 0 출력함 스레드 끝나기 전에 출력하기 때문

        System.out.println("1~100 합: " + sumThread.getSum());
    }
}
