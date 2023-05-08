package sec02.exam01;

import java.util.*;

public class ArrayListExample {
    public static void main(String[] args) {
        List<String> list = new ArrayList<String>();

        list.add("Java"); //�־��� ��ü �� ���� �߰�
        list.add("JDBC");
        list.add("Servlet/JSP");
        list.add(2, "Database"); //�ε��� 2�� �߰�
        list.add("iBATIS");
        
        int size = list.size(); //size(): ����� �� ��ü��
        System.out.println("�� ��ü��: " + size);
        System.out.println();

        String skill = list.get(2);
        System.out.println("2: " + skill);
        System.out.println();

        for(int i = 0; i < list.size(); i++) {
            String str = list.get(i);
            System.out.println(i + ": " + str);
        }
        System.out.println();

        list.remove(2);
        list.remove(2);
        list.remove("iBATIS"); //�־��� ��ü ����
        
        for(int i = 0; i < list.size(); i++) {
            String str = list.get(i);
            System.out.println(i + ": " + str);
        }
    }
}
