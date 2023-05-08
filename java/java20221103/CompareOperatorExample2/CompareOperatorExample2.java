package CompareOperatorExample2;

public class CompareOperatorExample2 {
    public static void main(String[] args) {
        int v2 = 1;
        double v3 = 1.0;
        System.out.println(v2 == v3); //큰 자료형으로 변환되어 연산
        
        double v4 = 0.1;
        float v5 = 0.1f;
        System.out.println(v4 == v5); //0.1f는 딱 0.1이 아니라서 false
        System.out.println((float)v4 == v5);
        System.out.println((int)(v4 * 10) == (int)(v5 * 10));
    }
}
