package sec03.exam01;

public class A {
    //인스턴스 필드
    B field1 = new B();
    C field2 = new C(); 

    void method1() { //인스턴스 메소드
    B var1 = new B();
    C var2 = new C();
    }

    //static B field3 = new B(); //정적 필드엔 인스턴스 멤버 클래스 객체 생성 불가능
    static C field4 = new C();

    static void method2() {
        //B var3 = new B(); //정적 메소드에 인스턴스 멤버 클래스 객체 생성 불가능
        C var4 = new C();
    }

    class B {}
    static class C {}
}
