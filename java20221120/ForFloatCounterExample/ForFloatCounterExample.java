package ForFloatCounterExample;

public class ForFloatCounterExample {
    public static void main (String[] args) {
        for(float x = 0.1f; x <= 1.0f; x += 0.1f) {//초기화식에서 루프 카운트 변수 선언할 때 부동소수점 타입 사용 불가 //0.1은 float타입으로 정확하게 표현 불가능, 0.1보다 큰 값 더해짐
            System.out.println(x);
        }
    }
}