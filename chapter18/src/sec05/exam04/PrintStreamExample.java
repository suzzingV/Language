package exam04;

import java.io.*;

public class PrintStreamExample {
    public static void main(String[] args) throws IOException {
        FileOutputStream fos = new FileOutputStream("C:\\Users\\skylim\\Documents\\�ڹ� ������\\file.txt");
        PrintStream ps = new PrintStream(fos);
        
        ps.println("[������ ���� ��Ʈ��]");
        ps.println("��ġ ");
        ps.println("�����Ͱ� ����ϴ� ��ó��");
        ps.println("�����͸� ����մϴ�.");

        ps.flush();
        ps.close();
        fos.close();
    }
}
