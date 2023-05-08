package sec04.exam01;

import java.io.File;
import java.io.IOException;
import java.text.SimpleDateFormat;
import java.util.Date;

public class FileExample {
    public static void main(String[] args) throws IOException {
        File dir = new File("C:/Users/suzzi/OneDrive/¹®¼­/ÄÚµù ½´Âôºñ/Dir");
        File file1 = new File("C:/Users/suzzi/OneDrive/¹®¼­/ÄÚµù ½´Âôºñ/file1.txt");
        File file2 = new File("C:/Users/suzzi/OneDrive/¹®¼­/ÄÚµù ½´Âôºñ/file2.txt");
        File file3 = new File("C:/Users/suzzi/OneDrive/¹®¼­/ÄÚµù ½´Âôºñ/file3.txt");

        if(!dir.exists()) { dir.mkdirs(); };
        if(!file1.exists()) { file1.createNewFile(); }
        if(!file2.exists()) { file2.createNewFile(); }
        if(!file3.exists()) { file3.createNewFile(); }

        File temp = new File("C:/Users/suzzi/OneDrive/¹®¼­/ÄÚµù ½´Âôºñ/");
        SimpleDateFormat sdf = new SimpleDateFormat("yyyy-MM-dd    a    HH:mm");
        File[] contents = temp.listFiles();
        System.out.println("³¯Â¥            ½Ã°£             ÇüÅÂ        Å©±â    ÀÌ¸§");
        System.out.println("-------------------------------------------------------");
        for(File file : contents) {
            System.out.print(sdf.format(new Date(file.lastModified())));
            if(file.isDirectory()) {
                System.out.print("\t<DIR>\t\t\t" + file.getName());
            } else {
                System.out.print("\t\t\t" + file.length() + "\t" + file.getName());
            }
            System.out.println();
        }

    }
}
