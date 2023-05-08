package sec04.exam02;

import java.io.FileInputStream;

public class FileInputStreamExample {
    public static void main(String[] args) {
        try {
            FileInputStream fis = new FileInputStream(
                "C:/Users/suzzi/OneDrive/¹®¼­/ÄÚµù ½´Âôºñ/java/chapter18/src/sec04/exam02/FileInputStreamExample.java"
            );
            int data;
            while( (data = fis.read() ) != -1) {
                System.out.write(data);
            }
            fis.close();
        } catch(Exception e) {
            e.printStackTrace();
        }
    }
}
