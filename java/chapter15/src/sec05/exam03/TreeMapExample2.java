package sec05.exam03;

import java.util.*;

public class TreeMapExample2 {
    public static void main(String[] args) {
        TreeMap<Integer, String> scores = new TreeMap<Integer, String>();
        scores.put(new Integer(87), "ȫ�浿");
        scores.put(new Integer(98), "�̵���");
        scores.put(new Integer(75), "�ڱ���");
        scores.put(new Integer(95), "�ſ��");
        scores.put(new Integer(80), "���ڹ�");

        NavigableMap<Integer, String> descendingMap = scores.descendingMap(); //�ݺ����� ���� ���ŷο�
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
