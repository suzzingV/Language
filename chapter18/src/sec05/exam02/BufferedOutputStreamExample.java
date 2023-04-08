package exam02;

import java.io.*;

public class BufferedOutputStreamExample {
    public static void main(String[] args) throws Exception {
        FileInputStream fis;
        FileOutputStream fos;
        BufferedInputStream bis;
        BufferedOutputStream bos;
        

        int data = -1;
        long start = 0;
        long end = 0;

        fis = new FileInputStream(
            "C:\\Users\\skylim\\Documents\\ÀÚ¹Ù ½´Âôºñ\\java\\chapter18\\src\\sec05\\exam02\\xiao.jpg"
        );
        bis = new BufferedInputStream(fis);
        fos = new FileOutputStream(
            "C:\\Users\\skylim\\Documents\\ÀÚ¹Ù ½´Âôºñ\\xiao.jpg"
        );
        start = System.currentTimeMillis();
        while((data = bis.read()) != -1) {
            fos.write(data);
        }
        fos.flush();
        end = System.currentTimeMillis();
        fos.close(); bis.close(); fis.close();
        System.out.println("»ç¿ëÇÏÁö ¾Ê¾ÒÀ» ¶§: " + (end - start));

        fis = new FileInputStream(
            "C:\\Users\\skylim\\Documents\\ÀÚ¹Ù ½´Âôºñ\\java\\chapter18\\src\\sec05\\exam02\\xiao.jpg"
        );
        bis = new BufferedInputStream(fis);
        fos = new FileOutputStream(
            "C:\\Users\\skylim\\Documents\\ÀÚ¹Ù ½´Âôºñ\\xiao.jpg"
        );
        bos = new BufferedOutputStream(fos);
        start = System.currentTimeMillis();
        while((data = bis.read()) != -1) {
            bos.write(data);
        }
        end = System.currentTimeMillis();
        bos.flush();
        fis.close(); bis.close(); fos.close(); bos.close();
        System.out.println("»ç¿ëÇßÀ» ¶§: " + (end - start));
    }
}
