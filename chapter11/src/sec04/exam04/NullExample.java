package sec04.exam04;

import java.util.Objects;

public class NullExample {
    public static void main(String[] args) {
        String str1 = "홍길동";
        String str2 = null;

        System.out.println(Objects.requireNonNull(str1));

        try {
            String name = Objects.requireNonNull(str2);
        } catch (Exception e) {
            System.out.println(e.getMessage()); //그냥 에러메시지 뜸
        }

        try {
            String name = Objects.requireNonNull(str2, "이름이 없습니다."); //두번째 매개값은 exception 객체의 getMessage의 매개값으로 들어감
        } catch (Exception e) {
            System.out.println(e.getMessage()); //위에서 지정한 에러메시지 뜸
        }

        try {
            String name = Objects.requireNonNull(str2, ()->"이름이 없다니깐요"); //람다식
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }    
    }
}
