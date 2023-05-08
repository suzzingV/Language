package ArithmeticOperatorExample;

public class ArithmeticOperatorExample {
    public static void main(String[] args) {
        int v1 = 5;
        int v2 = 2;

        int result1 = v1 + v2;
        System.out.println(result1);

        int result2 = v1 - v2;
        System.out.println(result2);

        int result3 = v1 * v2;
        System.out.println(result3);

        int result4 = v1 / v2;
        //피연산자들 정수타입, int보다 작으면 int형으로 바꿔 연산
        //피연산자들 정수타입, long있으면 모두 long으로 바꿔서 연산
        //피연산자중 실수 있으면 크기 큰 실수로 변환 후 연산
        System.out.println(result4); //소수점 안나옴 //int형

        int result5 = v1 % v2;
        System.out.println(result5);
        
        double result6 = (double)v1 / v2; //형변환 안해주면(or 1.0안곱해주면) 소수점은 출력되지만 0으로 출력됨
        System.out.println(result6); 
    }
}
