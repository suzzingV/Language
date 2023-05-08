package exam03.sec01;

public class TryCatchFinallyExample {
    public static void main(String[] args) {
        try {
            Class clazz = Class.forName("java.lang.String2"); //존재하지 않는 클래스
        } catch(ClassNotFoundException e) { //일반예외 //안하면 컴파일 오류
            System.out.println("클래스가 존재하지 않습니다.");
        }
    }
}
