import java.io.*;

public class OutputStreamWriterExample {
    public static void main(String[] args) throws Exception {
        FileOutputStream fos = new FileOutputStream("C:\\Users\\skylim\\Documents\\�ڹ� ������/file.txt");
        Writer writer = new OutputStreamWriter(fos);
        
        String data = "����Ʈ ��� ��Ʈ���� ���� ��� ��Ʈ������ ��ȯ";
        writer.write(data);

        writer.flush();
        writer.close();
        System.out.println("���� ������ �������ϴ�.");
    }
}
