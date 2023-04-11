package exam05;

import java.io.*;

public class NonSerializableParentExample {
    public static void main(String[] args) throws Exception {
        FileOutputStream fos = new FileOutputStream("C:\\Users\\skylim\\Documents\\�ڹ� ������\\Object.dat");
        ObjectOutputStream oos = new ObjectOutputStream(fos);
        Child child = new Child();
        child.field1 = "ȫ�浿";
        child.field2 = "ȫ���";
        oos.writeObject(child);
        oos.flush(); oos.close(); fos.close();

        FileInputStream fis = new FileInputStream("C:\\Users\\skylim\\Documents\\�ڹ� ������\\Object.dat");
        ObjectInputStream ois = new ObjectInputStream(fis);
        Child v = (Child) ois.readObject();
        System.out.println("field1: " + v.field1);
        System.out.println("field2: " + v.field2);
        //ois.close(); fis.close();
        fis.close();
    }
}
