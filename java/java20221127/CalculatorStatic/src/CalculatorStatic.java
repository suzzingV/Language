public class CalculatorStatic {
    static double pi = 3.14159;
 
    static int plus(int x, int y) {
        return x + y;
    }

    static int minus(int x, int y) {
        return x - y;
    }
}
//객체마다 가지고 있을 필요없는 공용적 데이터는 정적으로