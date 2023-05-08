package sec07.exam02;

public class StringReplaceExample {
    public static void main(String[] args) {
        String oldstr = "자바는 객체지향 언어입니다. 자바는 풍부한 API를 지원합니다.";
        String newstr = oldstr.replace("자바", "JAVA"); //replace(str1, str2): str1을 str2로 대치함
        //문자열은 변경이 불가하므로 replace() 메소드가 리턴하는 문자열은 원래 문자열의 수정본이 아닌 완전새로운 문자열
        System.out.println(oldstr);
        System.out.println(newstr);
    }
}
