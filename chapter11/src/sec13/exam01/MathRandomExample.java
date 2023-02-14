package sec13.exam01;

public class MathRandomExample {
    public static void main(String[] args) {
        int num = (int) (Math.random() * 6) + 1; //강제 형변환 시키면 원하는 타입 랜덤값 얻을 수 있음
        System.out.println("주사위의 눈: " + num);
    }
}
