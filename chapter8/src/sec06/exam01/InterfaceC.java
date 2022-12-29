package sec06.exam01;

public interface InterfaceC extends InterfaceA, InterfaceB { //인터페이스는 다중 상속 가능
    //하위 인터페이스의 구현 클래스는 상위 인터페이스에 있는 메소드들까지 다 구현해야함
    public void methodC();
}
