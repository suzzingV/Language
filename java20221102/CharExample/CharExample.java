package CharExample;

public class CharExample {
    public static void main(String[] args) {
        char c1 = 'A';
        char c2 = 65;
        char c3 = '\u0041'; // u + 16진수: 유니코드라는 표시
        
        char c4 = '가';
        char c5 = 44032;
        char c6 = '\uac00';

        int unicode = c1;

        System.out.println(c1);
        System.out.println(c2);
        System.out.println(c3);
        System.out.println(c4);
        System.out.println(c5);
        System.out.println(c6);
        System.out.println(unicode);
    }
}
//문자열은 String. 하지만 변수에 문자열을 저장하는 게 아닌 참조하는 것
//문자에는 ''불가 문자열은 ""가능