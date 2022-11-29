package sec13.exam03.package1;

public class B {
    public B() {
        A a = new A();
        a.field1 = 1; //public이니까 접근 가능
        a.field2 = 1; //같은 패키지에 있으니까 가능
        a.field3 = 1; //다른 클래스니까 불가능

        a.method1();
        a.method2();
        a.method3(); //private라서 안됨
    }
}
