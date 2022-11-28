package DoWhileExample;

import java.util.Scanner;

public class DoWhileExample {
    public static void main(String[] args) {
        System.out.println("메시지를 입력하세요");
        System.out.println("프로그램을 종료하려면 q를 입력하세요");

        Scanner sc = new Scanner(System.in, "EUC-KR"); //한국어도 입력받으려면 EUC-KR 넣어줘야 함
        String inputString;
        
        do { //일단 실행하고 봄
             System.out.print(">");
             inputString = sc.nextLine();
             System.out.println(inputString);
        } while(!inputString.equals("q")); //문자열.equals(문자열) : 앞 문자열과 뒷 문자열 같으면 true

        System.out.println();
        System.out.println("프로그램 종료");
        sc.close();
    }
}
