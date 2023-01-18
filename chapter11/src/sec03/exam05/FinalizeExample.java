package sec03.exam05;

public class FinalizeExample {
    public static void main(String[] args) {
        Counter counter = null;
        for(int i = 1; i <= 50; i++) {
            counter = new Counter(i);

            counter = null;
            System.gc(); //쓰레기 수집가 실행요청 //메모리 상태 보고 무작위로 실행됨
        }
    }
}
