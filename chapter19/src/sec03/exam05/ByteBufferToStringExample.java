package sec03.exam05;

import java.nio.*;
import java.nio.charset.Charset;

public class ByteBufferToStringExample {
	public static void main(String[] args) {
		Charset charset = Charset.forName("UTF-8");
		
		String data = "안녕하세요";
		ByteBuffer byteBuffer = charset.encode(data);
		
		data = charset.decode(byteBuffer).toString(); //charset.decode(): CharBuffer 리턴
		System.out.println("문자열 복원: " + data);
	}
}