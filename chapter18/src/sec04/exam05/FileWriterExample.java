package sec04.exam05;

import java.io.*;

public class FileWriterExample {
    public static void main(String[] args) throws Exception {
        File file = new File("C:/Users/suzzi/OneDrive/����/�ڵ� ������/file.txt");
        FileWriter fw = new FileWriter(file, true);
        fw.write("FileWriter�� �ѱ۷� �� " + "\r\n"); //\r\n: ĳ�������ϰ� ���� �ǵ� -> ���Ϳ� ���� ����
        fw.write("���ڿ��� �ٷ� ����� �� �ִ�." + "\r\n");
        fw.flush();
        fw.close();
        System.out.println("���Ͽ� ����Ǿ����ϴ�.");
    }
}
