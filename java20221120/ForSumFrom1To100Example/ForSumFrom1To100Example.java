package ForSumFrom1To100Example;

public class ForSumFrom1To100Example {
    public static void main(String[] args) {
        int sum = 0;

        //int i = 0; //앞에 선언되었으면 밖에서도 사용 가능
        for (int i = 1; i <= 100; i++) { //i는 이 안에서만 쓸 수 있다
            sum += i;
        }

        System.out.println("1~100 합: " + sum); //여기는 i없음
        //System.out.println("1~" + (i - 1) + "합 : " + sum);
    }
}
