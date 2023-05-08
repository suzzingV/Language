package exam05.sec01;

public class TryWithResourceExample {
    public static void main(String[] args) {
        try (FileInputStream fis = new FileInputStream("file.txt")) {  //try에 리소스를 같이 넣어주면 예외 발생하거나 완료되면 자동으로 close() 실행함
            //예외발생하면 일단 닫고 예외처리 실행
            //리소스 객체는 java.lang.AutoCloseable 인터페이스 구현해야 한다.
            fis.read();
            throw new Exception(); //강제적으로 예외 발생
        } catch (Exception e) {
            System.out.println("예외 처리 코드가 실행되었습니다.");
        }
    }
}
