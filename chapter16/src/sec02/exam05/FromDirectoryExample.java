package sec02.exam05;

import java.io.IOException;
import java.nio.file.*;
import java.util.stream.*;

public class FromDirectoryExample {
    public static void main(String[] args) throws IOException {
        Path path = Paths.get("C:/Users/skylim/Documents/ÀÚ¹Ù ½´Âôºñ/java/chapter16/src/sec02");
        Stream<Path> stream = Files.list(path);
        stream.forEach(p -> System.out.println(p.getFileName()));
    }
}
