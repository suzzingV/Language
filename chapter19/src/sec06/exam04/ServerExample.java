package sec06.exam04;

import java.nio.channels.*;
import java.net.*;
import java.nio.*;
import java.nio.charset.*;
import java.io.*;

public class ServerExample {
	public static void main(String[] args) {
		ServerSocketChannel serverSocketChannel = null;
		try {
			serverSocketChannel = ServerSocketChannel.open();
			serverSocketChannel.configureBlocking(true);
			serverSocketChannel.bind(new InetSocketAddress(5001));
			while(true) {
				System.out.println("[연결 기다림]");
				SocketChannel socketChannel = serverSocketChannel.accept();
				InetSocketAddress isa = (InetSocketAddress)socketChannel.getRemoteAddress();
				System.out.println("[연결 수락함] " + isa.getHostName());
				
				ByteBuffer byteBuffer = null;
				Charset charset = Charset.forName("UTF-8");
				
				byteBuffer = ByteBuffer.allocate(100);
				int byteCount = socketChannel.read(byteBuffer);
				byteBuffer.flip();
				String message = charset.decode(byteBuffer).toString(); //decode만 하면 CharBuffer 반환
				System.out.println("[데이터 받기 성공]: " + message);
				
				byteBuffer = charset.encode("Hello Client");
				socketChannel.write(byteBuffer);
				System.out.println("[데이터 보내기 성공]");
			}
		} catch(Exception e) {}
		
		if(serverSocketChannel.isOpen()) {
			try {
				serverSocketChannel.close();
			} catch (IOException e1) {}
		}
	}
}