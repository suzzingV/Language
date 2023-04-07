package sec04.exam03;

import java.io.*;

public class FileOutputStreamExample {
    public static void main(String[] args) throws IOException {
        String originalFileName = 
            "C:/Users/suzzi/OneDrive/����/ī�޶� �ٹ�/����.jpg";
        String targetFileName = 
            "C:/Users/suzzi/OneDrive/����";
        
        FileInputStream fis = new FileInputStream(originalFileName);
        FileOutputStream fos = new FileOutputStream(targetFileName);

        int readByteNo;
        byte[] readBytes = new byte[100];
        while( (readByteNo = fis.read(readBytes)) != -1) {
            fos.write(readBytes);
        }

        fos.flush();
        fos.close();
        fis.close();

        System.out.println("���簡 �� �Ǿ����ϴ�.");
    }
}
