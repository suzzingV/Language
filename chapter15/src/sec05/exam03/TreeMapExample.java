package sec05.exam03;

import java.util.*;

public class TreeMapExample {
    public static void main(String[] args) {
        TreeMap<String, Integer> treeMap = new TreeMap<>();
        treeMap.put("apple", new Integer(10));
        treeMap.put("forever", new Integer(60));
        treeMap.put("describle", new Integer(40));
        treeMap.put("ever", new Integer(50));
        treeMap.put("zoo", new Integer(10));
        treeMap.put("base", new Integer(20));
        treeMap.put("guess", new Integer(70));
        treeMap.put("cherry", new Integer(30));

        System.out.println("[c~f ������ �ܾ� �˻�]");
        NavigableMap<String, Integer> rangeMap = treeMap.subMap("c", true, "f", true); //c���� f���� ���ڿ� ���� 
        for(Map.Entry<String, Integer> entry : rangeMap.entrySet()) {
            System.out.println(entry.getKey() + "-" + entry.getValue() + "������");
        }
    }
}
