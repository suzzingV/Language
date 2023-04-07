package sec04.exam05;

import java.io.*;

public class FileWriterExample {
    public static void main(String[] args) throws Exception {
        File file = new File("C:/Users/suzzi/OneDrive/문서/코딩 슈찡비/file.txt");
        FileWriter fw = new FileWriter(file, true);
        fw.write("FileWriter는 한글로 된 " + "\r\n"); //\r\n: 캐리지리턴과 라인 피드 -> 엔터와 같은 역할
        fw.write("문자열을 바로 출력할 수 있다." + "\r\n");
        fw.flush();
        fw.close();
        System.out.println("파일에 저장되었습니다.");
    }
}
