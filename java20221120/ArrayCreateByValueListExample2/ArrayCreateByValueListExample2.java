package ArrayCreateByValueListExample2;

public class ArrayCreateByValueListExample2 {
    public static void main(String[] args) {
        int[] scores;
        scores = new int[] { 83, 90, 87 }; //배열 변수 미리 선언해준 후, 값 목록 나중에 결정
        int sum1 = 0;
        for(int i = 0; i < 3; i++) {
            sum1 += scores[i];
        }
        System.out.println("총합: " + sum1);

        int sum2 = add(new int[] { 83, 90, 87 }); //값 목록으로 배열 생성함과 동시에 메소드의 매개값으로 사용하고자 할때
        System.out.println("총합: " + sum2);
        System.out.println();
    }

    public static int add(int[] scores) {
        int sum = 0;
        for(int i = 0; i < 3; i++) {
            sum += scores[i];
        }
        return sum;
    }
}
