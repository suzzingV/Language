package exam02;

import java.io.*;

public class BufferedInputStreamExample {
    public static void main(String[] args) throws Exception {
        long start = 0;
        long end = 0;

        FileInputStream fis1 = new FileInputStream(
            "C:\\Users\\skylim\\Documents\\�ڹ� ������\\java\\chapter18\\src\\sec05\\exam02\\xiao.jpg"
        );
        start = System.currentTimeMillis();
        while(fis1.read() != -1) {}
        end = System.currentTimeMillis();   
        System.out.println("������� �ʾ��� ��: " + (end - start));
        fis1.close();

        FileInputStream fis2 = new FileInputStream(
            "C:\\Users\\skylim\\Documents\\�ڹ� ������\\java\\chapter18\\src\\sec05\\exam02\\xiao.jpg"
        ); //fis1�� �̹� �� �о ���� �������� ��
        BufferedInputStream bis = new BufferedInputStream(fis2);
        start = System.currentTimeMillis();
        while(bis.read() != -1) {}
        end = System.currentTimeMillis();
        System.out.println("������� ��: " + (end - start));
        bis.close();
        fis2.close();
    }
}
