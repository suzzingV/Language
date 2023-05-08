package sec05.exam02;

import java.util.*;

public class TreeSetExample1 {
    public static void main(String[] args) {
        TreeSet<Integer> scores = new TreeSet<Integer>();
        scores.add(87);
        scores.add(98);
        scores.add(75);
        scores.add(95);
        scores.add(80);

        Integer score = null;
        
        score = scores.first(); //제일 낮은 객체 리턴
        System.out.println("가장 낮은 점수: " + score);

        score = scores.last(); //제일 높은 객체 리턴
        System.out.println("가장 높은 점수: " + score);

        score = scores.lower(95);
        System.out.println("95점 아래 점수: " + score);

        score = scores.higher(95);
        System.out.println("95점 위의 점수: " + score);

        score = scores.floor(95);
        System.out.println("95이거나 바로 아래의 점수: " + score);

        score = scores.ceiling(85);
        System.out.println("85이거나 바로 위의 점수: " + score);
        System.out.println();

        while(!scores.isEmpty()) {
            score = scores.pollFirst(); //가장 낮은 객체 리턴하고 삭제
            System.out.println(score + "(남은 객체 수: " + scores.size() + ")");
        }
    }
}
