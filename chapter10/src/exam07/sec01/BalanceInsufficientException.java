package exam07.sec01;

public class BalanceInsufficientException extends Exception { //일반 예외처리는 Exception, 실행예외처리는 RuntimeException 상속받음
    public BalanceInsufficientException() {}
    public BalanceInsufficientException(String message) {
        super(message); //상위클래스의 생성자에 대입
    }
}
