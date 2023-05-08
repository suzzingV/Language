package PromotionExample;

public class PromotionExample {
    public static void main(String[] args) {
        byte byteValue = 10;
        int intValue = byteValue;
        System.out.println(intValue); //작은 자료형에서 큰 자료형으로 자동 자료형 변환(바이트 수 기준)
        
        char charValue = '가';
        intValue = charValue;
        System.out.println("가의 유니코드 =" + intValue);
        
        intValue = 500;
        long longValue = intValue;
        System.out.println(longValue);

        intValue = 200;
        double doubleValue = intValue;
        System.out.println(doubleValue);
    }
}
//byte는 char로 자동 형변환 되지 않는다. char는 음수가 없기 때문. 강제형변환해야됨
//float가 long보다 바이트수가 작은데 더 큰 자료형이라고 판단하는 이유는 float가 표현할 수 있는 수가 더 많기 때문