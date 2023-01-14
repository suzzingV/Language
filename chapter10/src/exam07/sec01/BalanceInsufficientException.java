package exam07.sec01;

public class BalanceInsufficientException extends Exception { //일반 예외처리는 Exception, 실행예외처리는 RuntimeException 상속받음
    public BalanceInsufficientException() {} //매개변수가 없는 기본 생성자
    public BalanceInsufficientException(String message) { //예외 메시지 전달하기 위해 String 타입의 매개변수를 갖는 생성자
        super(message); //상위클래스의 생성자에 대입
    }
}
//사용자 정의 예외 클래스는 필드, 생성자, 메소드 선언들을 포함할 수 있지만 대부분 생성자 선언만을 포함