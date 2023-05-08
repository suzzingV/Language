package OperationsPromotionExample;

public class OperationsPromotionExample {
    public static void main(String[] args) {
        byte byteValue1 = 10;
        byte byteValue2 = 20;
        int intValue = byteValue1 + byteValue2;
        //정수 연산은 int타입을 기본으로 한다.
        System.out.println(intValue);
        
        char charValue1 = 'A';
        char charValue2 = 1;
        int intValue2 = charValue1 + charValue2;
        System.out.println("유니코드 = " + intValue2);
        System.out.println("출력문자 = " + (char) intValue2);
        
        int intValue3 = 10;
        int intValue4 = intValue3/4;
        System.out.println(intValue4);
        
        int intValue5 = 10;
        double doubleValue = intValue5 / 4.0; //연산하면 큰 자료형으로 자동변환
        //그냥 실수는 double로 생각
        System.out.println(doubleValue);
    }
}