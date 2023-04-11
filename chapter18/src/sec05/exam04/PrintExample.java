package exam04;

import java.util.*;

public class PrintExample {
    public static void main(String[] args) {
        System.out.printf("��ǰ�� ����: %d��\n", 123);
        System.out.printf("��ǰ�� ����: %6d��\n", 123);
        System.out.printf("��ǰ�� ����: %-6d��\n", 123);
        System.out.printf("��ǰ�� ����: %06d��\n", 123);

        System.out.printf("�������� %d�� ���� ����:%10.2f\n", 10, Math.PI * 10 * 10); //f���� �Է��ؾ���
        
        System.out.printf("%6d | %-10s | %10s\n", 1, "ȫ�浿", "����");

        Date now = new Date();
        System.out.printf("������ %tY�� %tm�� %td�� �Դϴ�\n", now, now, now);
        System.out.printf("������ %1$tY�� %1$tm�� %1$td�� �Դϴ�\n", now);
        System.out.printf("������ %1$tH�� %1$tM�� %1$tS�� �Դϴ�.\n", now);
        System.out.printf("%2$6s %1$s", "������", "�Ӽ���");
    }
}
