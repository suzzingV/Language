package sec08.exam02;

import java.util.StringTokenizer;

public class StringTokenizerExample {
    public static void main(String[] args) {
        String next = "홍길동/이수홍/박연수";
        
        StringTokenizer st = new StringTokenizer(next, "/"); //StringTokenizer(문자열, 구분자) : 문자열을 구분자로 나눠서 StringTokenizer 객체반환
        int countTokens = st.countTokens(); //StringTokenizer객체.countTokens() : 남아있는 토큰 수
        for(int i = 0; i < countTokens; i++) {
            String token = st.nextToken(); //StringTokenizer객체.nextToken() : 토큰 하나씩 꺼내옴
            System.out.println(token);
        }

        System.out.println();

        st = new StringTokenizer(next, "/");
        while(st.hasMoreTokens()) { //StringTokenizer객체.hasMoreTokens(): 남아있는 토큰 있는지 확인
            String token = st.nextToken();
            System.out.println(token);
        }
    }
}
