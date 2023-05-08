package exam08.sec01;

import exam07.sec01.*;
import exam07.sec02.*;

public class AccountExample {
    public static void main(String[] args) {
        Account account = new Account();
        
        account.deposit(10000); //예금
        
        try {
            account.withdraw(30000);
        } catch (BalanceInsufficientException e) {
            String message = e.getMessage(); //상위클래스인 Exception의 메소드 //리턴값이 메시지
            
            System.out.println(message);
            System.out.println();
            e.printStackTrace(); //예외 추적 후 출력 //Exception의 메소드
        }
    }
}
