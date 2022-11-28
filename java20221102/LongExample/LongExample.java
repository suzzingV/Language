package LongExample;

public class LongExample {
    public static void main(String[] args) {
        long var1 = 10; //작은 수는 안 붙여도 상관 없음
        long var2 = 20L;
        //long var3 = 1000000000000; //int 벗어나는 수에 l이나 L안붙이면 컴파일 에러
        long var4 = 1000000000000L;
        
        System.out.println(var1);
        System.out.println(var2);
        System.out.println(var4);
    }
}