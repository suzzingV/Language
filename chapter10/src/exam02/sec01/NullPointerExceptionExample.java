package exam02.sec01;

public class NullPointerExceptionExample {
    public static void main(String[] args) {
        String data = null;
        System.out.println(data.toString()); //data가 String객체 참조하고 있지 않으므로 예외
    }
}
