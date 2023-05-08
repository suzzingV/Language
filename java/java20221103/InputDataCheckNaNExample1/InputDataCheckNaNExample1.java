package InputDataCheckNaNExample1;

public class InputDataCheckNaNExample1 {
    public static void main(String[] args) {
        String userInput = "NaN";
        double val = Double.valueOf(userInput); //Double.valueOf(): double형으로 변환 //NaN은 변환 가능
        
        double currentBalance = 10000.0;

        currentBalance += val; //데이터 엉망 //NaN인지 조사해야 함
        System.out.println(currentBalance);
    }
}
