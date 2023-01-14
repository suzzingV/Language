package exam06.sec01;

public class ThrowsExample {
    public static void main(String[] args) {
        try {
            findClass();
        } catch (ClassNotFoundException e) {
            System.out.println("클래스가 존재하지 않습니다.");
        }
    }

    public static void findClass() throws ClassNotFoundException {
        Class clazz = Class.forName("java.lang.String2");
    }
}
//main 메소드에서 예외 떠넘기면 jvm이 처리함
//jvm은 예외의 내용을 콘솔에 출력하는 것으로 예외 처리