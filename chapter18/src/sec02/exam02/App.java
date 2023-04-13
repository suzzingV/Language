package sec02.exam02;

import java.io.*;

public class App {
    public static void main(String[] args) throws Exception {
        OutputStream os = new FileOutputStream("C:\\Users\\skylim\\Documents\\자바 슈찡비\\test.txt");
        byte[] data = "ABC".getBytes();
        System.out.println(data[0]);
        System.out.println((char)data[0]);
        for(int i = 0; i < data.length; i++) {
	    os.write(data[i]); //"A" "B" "C" �ϳ��� ��� //1����Ʈ�� ���Ƿ� byte���
    }
}
}
