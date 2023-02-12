package sec07.exam02;

public class StringToLowerUpperCaseExample {
    public static void main(String[] args){
        String str1 = "Java Programming";
        String str2 = "JAVA Programming";

        System.out.println(str1.equals(str2));

        String lowerStr1 = str1.toLowerCase(); //str.toLowerCase(), str.toUpperCase(): 문자열을 대문자나 소문자로 바꿔줌
        //수정아닌 새로운 문자열
        String lowerStr2 = str2.toLowerCase();
        System.out.println(lowerStr1.equals(lowerStr2));

        System.out.println(str1.equalsIgnoreCase(str2)); //str.equalsIgnoreCase(str1) : 대소문자 상관없이 문자열 비교
    }
}
