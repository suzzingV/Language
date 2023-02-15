package sec15.exam01;

import java.text.DecimalFormat;

public class DecimalFormatExample {
    public static void main(String[] args) {
        double num = 1234567.89;

        DecimalFormat df = new DecimalFormat("0"); //0: 10진수, 빈자리는 0으로 채움
        System.out.println(df.format(num)); //Format 클래스.format(타겟): format형식으로 변한 타겟을 문자열의 형태로 반환
        
        df = new DecimalFormat("0.0"); 
        System.out.println(df.format(num));

        df = new DecimalFormat("0000000000.0");
        System.out.println(df.format(num));

        df = new DecimalFormat("#"); //#: 10진수, 빈자리 안 채움
        System.out.println(df.format(num));

        df = new DecimalFormat("#.#");
        System.out.println(df.format(num));

        df = new DecimalFormat("##########.#");
        System.out.println(df.format(num));

        df = new DecimalFormat("#.0"); //.: 소수점
        System.out.println(df.format(num));

        df = new DecimalFormat("+#.0"); //+, -: 음수 양수 기호
        System.out.println(df.format(num));

        df = new DecimalFormat("-#.0");
        System.out.println(df.format(num));

        df = new DecimalFormat("#,###.0"); //,: 단위 구분
        System.out.println(df.format(num));

        df = new DecimalFormat("0.0E0"); //E: 지수문자
        System.out.println(df.format(num));

        df = new DecimalFormat("+#,### ; -#,###"); //양수와 음수의 패턴으로 모두 기술할 경우 패턴 구분자
        System.out.println(df.format(num));

        df = new DecimalFormat("#.# %"); //#.# %: 100 곱한 후 %문자 붙임
        System.out.println(df.format(num));

        df = new DecimalFormat("\u00A4 #,###"); //통화기호
        System.out.println(df.format(num));
    }
}
