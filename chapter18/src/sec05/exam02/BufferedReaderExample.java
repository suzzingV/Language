package exam02;

import java.io.*;

public class BufferedReaderExample {
    public static void main(String[] args) throws Exception {
        InputStream is = System.in;
        Reader reader = new InputStreamReader(is, "euc-kr");
        BufferedReader bf = new BufferedReader(reader);

        System.out.print("입력: ");
        String lineString = bf.readLine();

        System.out.print("출력: " + lineString);
    }
}
