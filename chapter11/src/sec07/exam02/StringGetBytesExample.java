package sec07.exam02;

import java.io.UnsupportedEncodingException;

public class StringGetBytesExample {
    public static void main(String[] args) {
        String str = "안녕하세요";

        byte[] bytes1 = str.getBytes(); //getBytes(): 기본 문자셋으로 인코딩된 바이트 배열 리턴
        System.out.println("bytes1.length: " + bytes1.length);
        String str1 = new String(bytes1); //기본 문자셋 이용해 디코딩
        System.out.println("bytes1 -> String: " + str1);

        try {
            byte[] bytes2 = str.getBytes("EUC-KR"); //알파벳 1바이트, 한글 2바이트로 인식
            //getBytes(Charset charset) 메소드는 잘못된 문자셋을 매개값으로 줄 경우 예외 발생
            System.out.println("bytes2.length: " + bytes2.length);
            String str2 = new String(bytes2, "EUC-KR"); //특정 문자셋으로 디코딩
            System.out.println("bytes2 -> String: " + str2);

            byte[] bytes3 = str.getBytes("UTF-8"); //알파벳 1바이트, 한글 3바이트
            System.out.println("bytes3.length: " + bytes3.length);
            String str3 = new String(bytes3, "UTF-8");
            System.out.println("bytes3 -> String: " + str3);
        } catch(UnsupportedEncodingException e) {
            e.printStackTrace();
        }
    }
}
