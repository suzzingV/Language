package sec02.exam03;

public class Main {
    public static void main(String[] args) {
        A a = new A();

        A.B b = a.new B(); //인스턴스 멤버 클래스는 바깥 클래스 만들고 접근 가능
        b.field1 = 3;
        b.method1();

        A.C c = new A.C(); //정적 멤버 클래스는 바로 만들 수 있다
        c.field1 = 3;
        c.method1();
        A.C.field2 = 3; //c에도 적용됨
        A.C.method2();

        a.method();
    }
}
