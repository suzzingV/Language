package MainStringArrayArgument;

public class MainStringArrayArgument {
    public static void main(String[] args) {
        if (args.length != 2) {
            System.out.println("프로그램의 샤용법");
            System.out.println("java MainStringArrayArgument num1 num2");
            System.exit(0); //프로그램 강제 종료
        }

        String strnum1 = args[0];
        String strnum2 = args[1];
        
        int num1 = Integer.parseInt(strnum1);
        int num2 = Integer.parseInt(strnum2);

        int result = num1 + num2;
        System.out.println(num1 + " + " + num2 + " = " + result);
    }
}
