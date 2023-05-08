package sec02.exam03;
import java.io.*;

public class App {
    public static void main(String[] args) throws Exception {
        Reader reader = new FileReader("C:/Users/skylim/Documents/ÀÚ¹Ù ½´Âôºñ/test.txt");
        int readData;
        while((readData= reader.read()) != -1) {
            char charData = (char)readData;
            System.out.println(readData);
            System.out.println(charData);
        }
    }
}
