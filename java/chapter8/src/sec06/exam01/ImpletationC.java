package sec06.exam01;

public class ImpletationC implements InterfaceC {
    //하위 클래스 구현하는 클래스는 상위메소드 모두 다 구현해야 한다.
    public void methodA() {
        System.out.println("ImplementationC-methodA() 실행");
    }
    
    public void methodB() {
        System.out.println("ImplementationC-methodB() 실행");
    }

    public void methodC() {
        System.out.println("ImplementationC-methodC() 실행");
    }
}
