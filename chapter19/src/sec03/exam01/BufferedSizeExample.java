package sec03.exam01;

import java.nio.*;

public class BufferedSizeExample {
    public static void main(String[] args) {
        ByteBuffer directBuffer = ByteBuffer.allocateDirect(200 * 1024 * 1024);
        System.out.println("���̷�Ʈ ���۰� �����Ǿ����ϴ�.");

        ByteBuffer nonDirectBuffer = ByteBuffer.allocate(200* 1024 * 1024);
        System.out.println("�ʹ��̷�Ʈ ���۰� �����Ǿ����ϴ�.");
    }
}
