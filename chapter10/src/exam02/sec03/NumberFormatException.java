package exam02.sec03;

public class NumberFormatException {
    public static void main(String[] args) {
        String data1 = "100";
        String data2 = "a100";

        int value1 = Integer.parseInt(data1);
        int value2 = Integer.parseInt(data2); //int로 바꿀 수 없는 문자 포함된 경우 NumberFormatException 발생
        
        int result = value1 + value2;
        System.out.println(data1 + "+" + data2 + "=" + result);
    }
}
