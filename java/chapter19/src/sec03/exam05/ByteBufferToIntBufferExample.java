package sec03.exam05;

import java.nio.*;
import java.util.Arrays;

public class ByteBufferToIntBufferExample {
	public static void main(String[] args) {
		int[] writeData = { 10, 20 };
		IntBuffer writeIntBuffer = IntBuffer.wrap(writeData);
		ByteBuffer writeByteBuffer = ByteBuffer.allocate(writeIntBuffer.capacity() * 4);
		for(int i = 0; i < writeIntBuffer.capacity(); i++) {
			writeByteBuffer.putInt(writeIntBuffer.get(i));
		}
		writeByteBuffer.flip();
		
		ByteBuffer readByteBuffer = writeByteBuffer;
		IntBuffer readIntBuffer = readByteBuffer.asIntBuffer();
		int[] readData = new int[readIntBuffer.capacity()];
		readIntBuffer.get(readData);
		System.out.println("배열 복원: " + Arrays.toString(readData));
	}
}