package exam04;

import java.io.*;

public class PrintStreamExample {
    public static void main(String[] args) throws IOException {
        FileOutputStream fos = new FileOutputStream("C:\\Users\\skylim\\Documents\\자바 슈찡비\\file.txt");
        PrintStream ps = new PrintStream(fos);
        
        ps.println("[프린터 보조 스트림]");
        ps.println("마치 ");
        ps.println("프린터가 출력하는 것처럼");
        ps.println("데이터를 출력합니다.");

        ps.flush();
        ps.close();
        fos.close();
    }
}
