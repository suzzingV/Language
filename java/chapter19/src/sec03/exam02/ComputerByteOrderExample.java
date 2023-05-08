package sec03.exam02;

import java.nio.*;

public class ComputerByteOrderExample {
    public static void main(String[] args) {
        System.out.println("운영체제 종류: " + System.getProperty("os.name"));
        System.out.println("네이티브 바이트 해석 순서: " + ByteOrder.nativeOrder());
    }
}
