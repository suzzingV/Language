package exam02;

import java.io.*;

public class BufferedReaderExample {
    public static void main(String[] args) throws Exception {
        InputStream is = System.in;
        Reader reader = new InputStreamReader(is, "euc-kr");
        BufferedReader bf = new BufferedReader(reader);

        System.out.print("�Է�: ");
        String lineString = bf.readLine();

        System.out.print("���: " + lineString);
    }
}
