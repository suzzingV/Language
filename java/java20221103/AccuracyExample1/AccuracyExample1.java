package AccuracyExample1;

public class AccuracyExample1 {
    public static void main(String[] args) {
        int apple = 1;
        double pieceUnit = 0.1;
        int number = 7;

        double result = apple - number * pieceUnit; //float, double은 0.1을 정확히 표현할 수 없다. //정수연산해야됨
        System.out.println("사과 한 개에서 ");
        System.out.println("0.7조각을 빼면, ");
        System.out.println(result + "조각이 남는다.");
    }
}
