package sec8.exam02;

public class Dog extends Animal {
    public Dog() {
        this.kind = "포유류";
    }
    
    @Override
    public void sound() { //추상메소드는 오버라이딩해서 정의해야함. 안하면 에러뜸
        System.out.println("멍멍");
    }
}
