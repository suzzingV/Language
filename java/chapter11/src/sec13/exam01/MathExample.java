package sec13.exam01;

public class MathExample {
    public static void main(String[] args) {
        int v1 = Math.abs(-5);
        double v2 = Math.abs(-3.14); //Math.abs(a): 절대값
        System.out.println("v1: " + v1);
        System.out.println("v2: " + v2);

        double v3 = Math.ceil(5.3);
        double v4 = Math.ceil(-5.3); //Math.ceil(a): 올림값, 무조건 소수점 첫째자리에서 올림
        System.out.println("v3: " + v3);
        System.out.println("v4: " + v4);

        double v5 = Math.floor(5.3);
        double v6 = Math.floor(-5.3); //Math.floor(a): 버림값, 무조건 소수점 첫쨰자리부터 버림
        //음수는 버리면 작은 값으로
        System.out.println("v5: " + v5);
        System.out.println("v6: " + v6);

        int v7 = Math.max(5, 9); //Math.max(a, b): 최대값
        double v8 = Math.max(5.3, 2.5);
        System.out.println("v7: " + v7);
        System.out.println("v8: " + v8);

        int v9 = Math.min(5, 9); //Math.min(a, b): 최소값
        double v10 = Math.min(5.3, 2.5);
        System.out.println("v9: " + v9);
        System.out.println("v10: " + v10);

        double v11 = Math.random(); //Math.random(): 0.0<= double < 1.0 임의의 값
        System.out.println("v11: " + v11);

        double v12 = Math.rint(5.3);
        double v13 = Math.rint(5.7); //Math.rint(double): 가까운 정수의 실수값
        System.out.println("v12: " + v12);
        System.out.println("v13: " + v13);

        long v14 = Math.round(5.3);
        long v15 = Math.round(5.7); //Math.round(a) : 반올림값, long 반환
        System.out.println("v14: " + v14);
        System.out.println("v15: " + v15);

        double value = 12.3456; //셋쨰자리에서 반올림하고싶음
        double temp1 = value * 100;
        long temp2 = Math.round(temp1);
        double v16 = temp2 / 100.0;
        System.out.println("v16: " + v16);
    }
}
