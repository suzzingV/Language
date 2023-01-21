package sec04.exam05;

import java.util.Objects;

public class ToStringExample {
    public static void main(String[] args) {
        String str1 = "홍길동";
        String str2 = null;

        System.out.println(Objects.toString(str1));
        System.out.println(Objects.toString(str2));
        System.out.println(Objects.toString(str2, "이름이 없습니다.")); //null이면 두번째 매개값에 적힌 메시지 나옴
    }
}
