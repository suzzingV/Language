package sec03.exam03;

import java.io.Console;

public class ConsoleExample {
    public static void main(String[] args) {
        Console console = System.console();
        
        System.out.print("아이디: ");
        String id = console.readLine();

        System.out.println("패스워드: ");
        char[] charPass = console.readPassword(); //console.readPassword: char[] 반환
        String strPassword = new String(charPass);

        System.out.println("--------------------");
        System.out.println(id);
        System.out.println(strPassword);
    }
}
