package sec13.exam02;

import java.util.Random;
import java.util.Arrays;

public class RandomExample {
    public static void main(String[] args) {
        int[] selectNumber = new int[6];
        Random random = new Random(3); //선택번호 얻기 위한 랜덤객체 생성
        System.out.print("선택 번호: ");
        for(int i = 0; i < 6; i++) {
            selectNumber[i] = random.nextInt(45) + 1;
            System.out.print(selectNumber[i] + " ");
        }
        System.out.println();

        int[] winningNumber = new int[6];
        random = new Random(5); //seed 다르면 난수 다를 수밖에 없음
        System.out.print("당첨 번호: " );
        for(int i = 0; i < 6; i++) {
            winningNumber[i] = random.nextInt(45) + 1;
            System.out.print(winningNumber[i] + " ");
        }
        System.out.println();

        Arrays.sort(selectNumber);
        Arrays.sort(winningNumber); //비교 전 정렬
        boolean result = Arrays.equals(selectNumber, winningNumber); //Arrays.equals(): 내용물 비교
        System.out.print("당첨 여부: ");
        if(result) {
            System.out.println("1등에 당첨되셨습니다.");
        } else {
            System.out.println("당첨되지 않았습니다.");
        }
    }
}
