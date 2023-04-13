
import java.io.*;
import java.net.*;

public class ClientExample {
    public static void main(String[] args) {
        Socket socket = null;
        try {
            socket = new Socket();
            System.out.println("[���� ��û]");
            socket.connect(new InetSocketAddress("localhost", 5001));
            System.out.println("[���� ����]");

            byte[] bytes = null;
            String message = null;

            OutputStream os = socket.getOutputStream();
            message = "Hello server";
            bytes = message.getBytes();
            os.write(bytes);
            os.flush();
            System.out.println("[������ ������ ����]");

            InputStream is = socket.getInputStream();
            bytes = new byte[100];
            int readByteCount = is.read(bytes);
            message = new String(bytes, 0, readByteCount, "UTF-8");
            System.out.println("[������ �ޱ� ����] : " + message);

            os.close();
            is.close();
        } catch (Exception e) {}

        if(!socket.isClosed()) {
            try {
                socket.close();
            } catch (IOException e1) {}
        }
    }
}
