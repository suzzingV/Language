package sec03.exam05;

public class FinalizeExample {
    public static void main(String[] args) {
        Counter counter = null;
        for(int i = 1; i <= 50; i++) {
            counter = new Counter(i);

            counter = null;
            System.gc(); //쓰레기 수집기 실행요청 //메모리 상태 보고 무작위로 실행됨
            //한두번의 객체 쓰레기로 만들었다고 수집기 실행되는 거 아님
            //메모리 부족, cpu한가할 때 jvm에 의해 실행됨
        }
    }
}
