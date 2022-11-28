package StringConcatExample;

public class StringConcatExample {
    public static void main(String[] args) {
        String str1 = "JDK" + 6.0; //+: 피연산자 중 하나가 문자열이면 나머지를 문자열로 바꾸고 연결
        String str2 = str1 + " 특징";
        System.out.println(str2);

        String str3 = "JDK" + 3 + 3.0; //문자열 연결 먼저
        String str4 = 3 + 3.0 + "JDK"; //덧셈 계산 먼저
        System.out.println(str3);
        System.out.println(str4);
    }
}
