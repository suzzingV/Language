package exam07.sec02;

import exam07.sec01.BalanceInsufficientException;

public class Account {
    private long balance;

    public Account() {}

    public long getBalance() {
        return balance;
    }

    public void deposit(int money) {
        balance += money;
    }

    public void withdraw(int money) throws BalanceInsufficientException {
        if(balance < money) {
            throw new BalanceInsufficientException("잔고부족:" + (money - balance) + " 모자람");
            //예외 발생하면 멈춤
            //메소드 소환한 곳에서 예외 처리하도록 떠넘김
            //catch 블록에서 예외 메시지 필요하면 예외 메시지 갖는 생성자 이용
        }
        balance -= money;
    }
}
