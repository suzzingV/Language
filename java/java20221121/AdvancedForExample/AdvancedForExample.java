package AdvancedForExample;

public class AdvancedForExample {
    public static void main(String[] args) {
        int[] scores = {95, 71, 84, 93, 87};
        
        int sum = 0;
        for(int score: scores) { //향상된 for문: for(타입 변수: 배열) : 배열에서 가져올 값이 존재하는지 평가한 후 존재하면 변수에 저장하고 실행
            sum += score;
        }
        System.out.println("점수 총합: " + sum);

        double avg = (double)sum / scores.length;
        System.out.println("점수 평균: " + avg);
    }
}
