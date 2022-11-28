package LogicalOperatorExample;

public class LogicalOperatorExample {
    public static void main(String[] args) {
        int charcode = 'A';

        if (charcode >= 65 & charcode <= 90) { //&: 앞에가 false면 뒤에 연산 안하고 바로 false 리턴, 효율적
            System.out.println("대문자이군요");
        }

        if (charcode >= 97 && charcode <= 122) { //&&: 앞에 flase여도 뒤에까지 봄
            System.out.println("소문자이군요");
        }

        if (!(charcode < 48) && !(charcode > 57)) {
            System.out.println("0~9 숫자이군요");
        }

        int value = 6;
        
        if ( (value % 2 ==0) | (value % 3 == 0)) {
            System.out.println("2 또는 3의 배수이군요");
        }

        if ( (value % 2 == 0) || (value % 3 == 0)) {
            System.out.println("2 또는 3의 배수이군요");
        }
    }
}
