package sec06.exam01;

public class Example {
    public static void main(String[] args) {
        ImpletationC impl = new ImpletationC();

        InterfaceA ia = impl; //interfacea로 자동타입변환
        ia.methodA(); //interfacea에 있는 메소드만 사용 가능
        System.out.println();

        InterfaceB ib = impl;
        ib.methodB();
        System.out.println();

        InterfaceC ic = impl;
        ic.methodA();
        ic.methodB();
        ic.methodC();
        System.out.println();
    }
}
