package sec12.exam02;

public class AutoBoxingUnBoxingExample {
    public static void main(String[] args) {
        Integer obj = 100;
        System.out.println("value: " + obj.intValue());

        int value = obj;
        System.out.println("value: " + value);

        int result = obj + 100; //포장객체 연산 가능, 연산 시에도 자동 언박싱
        System.out.println("result: " + result);
    }
}
