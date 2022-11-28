package AccuacyExample2;

public class AccuracyExample2 {
    public static void main(String[] args) {
        int apple = 1;
        
        int totalpiece = apple * 10;
        int number = 7;
        int temp = totalpiece - number;

        double result = temp / 10.0; //정수 연산 //정확한 계산 가능
        
        System.out.println("사과 한 개에서 ");
        System.out.println("0.7조각을 빼면 ");
        System.out.println(result + "조각이 남는다.");
    }
}
