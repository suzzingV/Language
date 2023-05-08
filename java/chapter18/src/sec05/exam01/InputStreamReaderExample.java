package exam01;
import java.io.*;

public class InputStreamReaderExample {
    public static void main(String[] args) throws Exception {
        InputStream is = System.in;
        Reader reader = new InputStreamReader(is, "euc-kr");

        int readCharNo;
        char[] cbuf = new char[100];
        while( (readCharNo = reader.read(cbuf)) != -1) {
            String data = new String(cbuf, 0, readCharNo);
            System.out.println(data);
        } //엔터도 문자이기 때문에 엔터 누른다고 읽을 게 끝났다고 취급하지 않아서 안 끝남

        reader.close();
    }
}
