package exam01;
import java.io.*;

public class OutputStreamWriterExample {
    public static void main(String[] args) throws Exception {
        FileOutputStream fos = new FileOutputStream("C:\\Users\\skylim\\Documents\\자바 슈찡비/file.txt");
        Writer writer = new OutputStreamWriter(fos); //이미 프로그램에서 euc-kr로 받았기 때문에 지정 안해줘도 됨
        
        String data = "바이트 출력 스트림을 문자 출력 스트림으로 변환";
        writer.write(data);
        
        writer.flush();
        writer.close();
        System.out.println("파일 저장이 끝났습니다.");
    }
}
