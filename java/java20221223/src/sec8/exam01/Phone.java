package sec8.exam01;

public abstract class Phone { //추상클래스: new 연산자 이용해서 객체 만들지 못하고 상속 통해 자식 클래스만 만들 수 있음
    //생성자 반드시 있어야 함
    public String owner;

    public Phone(String owner) {
        this.owner = owner;
    }
    
    public void turnOn() {
        System.out.println("폰 전원을 켭니다.");
    }

    public void turnOff() {
        System.out.println("폰 전원을 끕니다.");
    }
}
