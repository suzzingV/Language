package sec12.exam03;

public class StringToPrimitiveValueExmple {
    public static void main(String[] args) {
        int value1 = Integer.parseInt("10"); //문자열을 기본 타입으로 변환, 대부분의 포장클래스엔 parse기본타입 으로 되어있는 정적 메소드 있음
        double value2 = Double.parseDouble("3.14");
        boolean value3 = Boolean.parseBoolean("true");

        System.out.println("value1: " + value1);
        System.out.println("value2: " + value2);
        System.out.println("value3: " + value3);

    }
}
