package SwitchStringExample;

public class SwitchStringExample {
    public static void main(String[] args) {
        String position = "과장";

        switch(position) { //String 형태도 사용 가능 원래는 정수형태만 됐음(byte, int, char, short, long)
            case "부장":
                System.out.println("700만원");
                break;
            case "과장":
                System.out.println("500만원");
                break;
            default:
                System.out.println("300만원");
        }
    }
}
