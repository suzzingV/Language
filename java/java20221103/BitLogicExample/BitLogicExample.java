package BitLogicExample;

public class BitLogicExample {
    public static void main(String[] args) {
        System.out.println("45 & 25 = " + (45 & 25));
        //비트논리연산자 //int형으로 연산하기때문에 결과도 int형
        //피연산자가 정수형이면 비트논리연산
        System.out.println("45 | 25 = " + (45 | 25));
        System.out.println("45 ^ 25 = " + (45 ^ 25));
        System.out.println("~45 = " + (~45));
    }
}
