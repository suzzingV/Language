package sec07.exam01;

public class ByteToStringExample {
    public static void main(String[] args) {
        byte[] bytes = {72, 101, 108, 108, 111, 32, 74, 97, 118, 97 };

        String str1 = new String(bytes); //배열 전체를 String 객체로 생성
        System.out.println(str1);

        String str2 = new String(bytes, 6, 4); //배열의 7 인덱스부터 4만큼 String 객체로 생성
        System.out.println(str2);
    }
}
