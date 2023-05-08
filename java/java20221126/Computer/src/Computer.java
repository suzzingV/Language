public class Computer {
    int sum1(int[] values) {
        int sum = 0;
        for(int i = 0; i < values.length; i++) {
            sum += values[i];
        }
        return sum;
    }

    int sum2(int ... values) { //들어올 배열의 값이 몇 개인지 모를 때
        int sum = 0;
        for(int i = 0; i < values.length; i++) { //배열과 똑같이 메소드 쓸 수 있음
            sum += values[i];
        }
        return sum;
    }
}
