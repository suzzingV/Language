package StringEqualsExample;

public class StringEqualsExample {
    public static void main(String[] args) {
        String strVar1 = "임수진";
        String strVar2 = "임수진"; //동일한 문자열은 동일한 주소값 가짐
        String strVar3 = new String("임수진"); //새로운 주소값에 저장
        
        System.out.println( strVar1 == strVar2);
        System.out.println( strVar1 == strVar3);
        System.out.println();
        System.out.println( strVar1.equals(strVar2)); //원본문자열.equals(비교문자열): 문자열 비교 메소드
        System.out.println( strVar1.equals(strVar3));
    }
}
