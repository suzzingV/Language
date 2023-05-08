package sec07.exam01;

import java.io.IOException;
import java.lang.String;

public class KeyBoardToStringExample {
    public static void main(String[] args) throws IOException {
        byte[] bytes = new byte[100];

        System.out.print("입력: ");
        int readByteNo = System.in.read(bytes); //System.in.read: 키보드에서 입력한 내용을 매개값으로 주어진 바이트 배열에 저장하고 읽은 바이트 수 리턴
        //엔터는 \r \n
        String str = new String(bytes, 0, readByteNo - 2);
        System.out.println(str);
    }
}
