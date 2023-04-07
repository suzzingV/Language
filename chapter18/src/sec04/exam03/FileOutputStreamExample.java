package sec04.exam03;

import java.io.*;

public class FileOutputStreamExample {
    public static void main(String[] args) throws IOException {
        String originalFileName = 
            "C:/Users/suzzi/OneDrive/사진/카메라 앨범/수진.jpg";
        String targetFileName = 
            "C:/Users/suzzi/OneDrive/사진";
        
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

        System.out.println("복사가 잘 되었습니다.");
    }
}
