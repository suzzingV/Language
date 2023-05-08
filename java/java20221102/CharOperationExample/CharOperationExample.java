package CharOperationExample;

public class CharOperationExample {
    public static void main (String[] args) {
        char c1 = 'A' + 1; //char반환 //유니코드
        char c2 = 'A';
        //char c3 = c2 + 1; //컴파일 에러 //char타입 산술연산되면 int로 변환
        System.out.println("c1: " + c1);
        System.out.println("c2: " + c2);
    }
}
