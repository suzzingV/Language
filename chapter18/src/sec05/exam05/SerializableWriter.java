package exam05;

import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectOutputStream;

public class SerializableWriter {
    public static void main(String[] args) throws IOException {
        FileOutputStream fos = new FileOutputStream("C:\\Users\\skylim\\Documents\\�ڹ� ������\\Object.dat");
        ObjectOutputStream oos = new ObjectOutputStream(fos);

        ClassA classA = new ClassA();
        classA.field1 = 1;
        classA.field2.field1 = 2;
        classA.field3 = 3;
        classA.field4 = 4;
        oos.writeObject(classA);
        oos.flush(); oos.close(); fos.close();
    }
}
