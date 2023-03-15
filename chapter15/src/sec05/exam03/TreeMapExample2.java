package sec05.exam03;

import java.util.*;

public class TreeMapExample2 {
    public static void main(String[] args) {
        TreeMap<Integer, String> scores = new TreeMap<Integer, String>();
        scores.put(new Integer(87), "홍길동");
        scores.put(new Integer(98), "이동수");
        scores.put(new Integer(75), "박길춘");
        scores.put(new Integer(95), "신용권");
        scores.put(new Integer(80), "김자바");

        NavigableMap<Integer, String> descendingMap = scores.descendingMap(); //반복문에 쓰기 번거로움
        Set<Map.Entry<Integer, String>> entrySet = descendingMap.entrySet();
        for(Map.Entry<Integer, String> entry : entrySet) {
            System.out.print(entry.getKey() + "-" + entry.getValue() + " ");
        }
        System.out.println();

        NavigableMap<Integer, String> acsendingMap = descendingMap.descendingMap();
        entrySet = acsendingMap.entrySet();
        for(Map.Entry<Integer, String> entry : entrySet) {
            System.out.print(entry.getKey() + "-" + entry.getValue() + " ");
        }
    }
}
