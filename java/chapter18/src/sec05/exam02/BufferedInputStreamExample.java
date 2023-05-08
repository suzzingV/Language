package exam02;

import java.io.*;

public class BufferedInputStreamExample {
    public static void main(String[] args) throws Exception {
        long start = 0;
        long end = 0;

        FileInputStream fis1 = new FileInputStream(
            "C:\\Users\\skylim\\Documents\\자바 슈찡비\\java\\chapter18\\src\\sec05\\exam02\\xiao.jpg"
        );
        start = System.currentTimeMillis();
        while(fis1.read() != -1) {}
        end = System.currentTimeMillis();   
        System.out.println("사용하지 않았을 때: " + (end - start));
        fis1.close();

        FileInputStream fis2 = new FileInputStream(
            "C:\\Users\\skylim\\Documents\\자바 슈찡비\\java\\chapter18\\src\\sec05\\exam02\\xiao.jpg"
        ); //fis1은 이미 다 읽어서 따로 만들어줘야 함
        BufferedInputStream bis = new BufferedInputStream(fis2);
        start = System.currentTimeMillis();
        while(bis.read() != -1) {}
        end = System.currentTimeMillis();
        System.out.println("사용했을 때: " + (end - start));
        bis.close();
        fis2.close();
    }
}
