public class CalculatorStaticExample {
    public static void main(String[] args) {
        double result1 = 10 * 10 * CalculatorStatic.pi; //정적 사용할 때는 클래스이름으로 사용하는게 좋음
        int result2 = CalculatorStatic.plus(10, 5);
        int result3 = CalculatorStatic.minus(10, 5);

        System.out.println("result1 : " + result1);
        System.out.println("result2 : " + result2);
        System.out.println("result3 : " + result3);
    }
}
