package sec07.exam02;

public class StringValueOfExample {
    public static void main(String[] args) {
        String str1 = String.valueOf(10);
        String str2 = String.valueOf(10.5);
        String str3 = String.valueOf(true); //String.valueOf(): 문자열로 변환
        
        //System.out.println(str1.getClass().getSimpleName()); //변수타입확인
        System.out.println(str1);
        System.out.println(str2);
        System.out.println(str3);
    }
}
