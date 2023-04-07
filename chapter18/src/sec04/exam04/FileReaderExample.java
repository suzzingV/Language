package sec04.exam04;

import java.io.*;

public class FileReaderExample {
    public static void main(String[] args) throws Exception {
        FileReader fr = new FileReader(
            "C:/Users/suzzi/OneDrive/¹®¼­/ÄÚµù ½´Âôºñ/java/chapter18/src/sec04/exam04/FileReaderExample.java"
        );
        
        int readCharNo;
        char[] cbuf = new char[100];
        while((readCharNo = fr.read(cbuf)) != -1) {
            String data = new String(cbuf, 0, readCharNo);
            System.out.print(data);
        }
        fr.close();
    }
}
