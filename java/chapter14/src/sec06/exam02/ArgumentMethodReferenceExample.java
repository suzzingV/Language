package sec06.exam02;

import java.util.function.ToIntBiFunction;

public class ArgumentMethodReferenceExample {
    public static void main(String[] args) {
        ToIntBiFunction<String, String> function; //ToIntBiFunction: 두 t 받아서 int로 반환
        
        function = (a, b) -> a.compareToIgnoreCase(b); //대소문자 관계없이 같으면 0, 앞이면 -1, 뒤면 1
        print(function.applyAsInt("Java8", "JAVA8"));
        
        function = String :: compareToIgnoreCase;
        print(function.applyAsInt("Java8", "JAVA8"));
    }
    
    public static void print(int order) {
        if(order < 0) { System.out.println("사전순으로 먼저 옵니다."); }
        else if (order == 0) { System.out.println("동일한 문자열입니다."); }
        else { System.out.println("사전순으로 나중에 옵니다."); }
    }
}
