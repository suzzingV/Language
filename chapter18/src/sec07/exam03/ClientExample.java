package sec07.exam03;

import java.net.InetSocketAddress;
import java.net.Socket;
import java.io.*;

public class ClientExample {
    public static void main(String[] args) {
        Socket socket = null;
        try {
            socket = new Socket();
            System.out.println("[���� ��û]");
            socket.connect(new InetSocketAddress("localhost", 5001));
            System.out.println("[���� ����]");
        } catch (Exception e) {}

        if(!socket.isClosed()) {
            try {
                socket.close();
            } catch (IOException e1) {}
        }
    }
}
