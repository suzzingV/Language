package BitReverseOperatorExample;

public class BitReverseOperatorExample {
    public static void main(String[] args) {
        int v1 = 10;
        int v2 = ~v1; //비트연산하면 결과는 int
        int v3 = ~v1 + 1; //비트연산하고 1 더해주면 부호반대
        System.out.println(toBinaryString(v1) + " (십진수: " + v1 + ")");
        System.out.println(toBinaryString(v2) + " (십진수: " + v2 + ")");
        System.out.println(toBinaryString(v3) + " (십진수: " + v3 + ")");
        System.out.println(); //개행
        
        int v4 = -10;
        int v5 = ~v4;
        int v6 = ~v4 + 1;
        System.out.println(toBinaryString(v4) + " (십진수: " + v4 + ")");
        System.out.println(toBinaryString(v5) + " (십진수: " + v5 + ")");
        System.out.println(toBinaryString(v6) + " (십진수: " + v6 + ")");
    }

    public static String toBinaryString(int value) {
        String str = Integer.toBinaryString(value); //Integer.toBinaryString: 정수값을 32비트 이진 문자열로 리턴
        while (str.length() < 32) //문자열 길이 구하기: 변수.length()
        {
            str = "0" + str;
        }
        return str;
    }
}
