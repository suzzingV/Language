package InputDataCheckNaNExample2;

public class InputDataCheckNaNExample2 {
    public static void main(String[] args) {
        String userString = "NaN";
        double val = Double.valueOf(userString);
        
        if (Double.isNaN(val)) { //NaN할 때 ==연산 하면 안됨. NaN은 != 연산 빼고 다 false 리턴
            System.out.println("NaN이 입력되어 처리할 수 없음");
            val = 0.0;
        }
        
        double currentBalance = 10000.0;
        currentBalance += val;
        System.out.println(currentBalance);
    }
}
