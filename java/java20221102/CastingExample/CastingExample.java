package CastingExample;

public class CastingExample {
    public static void main(String[] args) {
        int intValue = 44032; //char 범위에 속함. 안 속하면 캐스팅할 때 뒤에 1바이트 빼고 다 버려짐
        char charValue = (char) intValue; //큰거에서 작은 건 자동형변환 안됨
        System.out.println(charValue);
        
        long longValue = 500;
        intValue = (int) longValue;
        System.out.println(intValue);

        double doubleValue = 3.14;
        intValue = (int) doubleValue; //정수를 실수로 캐스팅하면 소수부분 버려짐
        System.out.println(intValue);
    }
}
