package FromIntToFloat;

public class FromIntToFloat {
    public static void main(String[] args) {
        int num1 = 123456780;
    int num2 = 123456780;

    float num3 = num2; //자동 형변환
    //float는 부호(1비트)+지수(8비트)+가수(23비트)이므로 32비트인 정수를 담을 수 없어서 근사치로 변환됨.
    //double은 부호(1비트)+지수(11비트)+가수(52비트)이므로 담을 수 있다.
    num2 = (int) num3;
    
    int result = num1 - num2;
    System.out.println(result);
    }
}