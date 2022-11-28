package InfinityAndNaNCheckExample;

public class InfinityAndNaNCheckExample {
    public static void main(String[] args) {
        int x = 5;
        double y = 0.0;
        
        //double z = x / y; //0.0이나 0.0f로 /연산하면 infinity
        double z = x % y; //0.0이나 0.0f로 % 연산하면 NaN
        //0으로 /, % 연산하면 예외발생 -> 예외발생하면 프로그램 종료되므로 예외처리 해줘야 함(catch)
        System.out.println(Double.isInfinite(z)); //확인 메소드(반환값 boolean)
        System.out.println(Double.isNaN(z));
        
        System.out.println(z + 2); //infinity, NaN 어떤 산술연산하든 infinity와 NaN 산출
    }
}
//실행결과 infinity나 NaN이면 if문 사용해서 예외처리