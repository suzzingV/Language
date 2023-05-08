package sec8.exam02;

public abstract class Animal {
    public String kind;

    public void breathe() {
        System.out.println("숨을 쉽니다.");
    }

    public abstract void sound(); //추상 메소드: 실행 내용은 클래스마다 다름
}
