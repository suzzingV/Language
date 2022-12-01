package sec6.package1;

public class B {
    public void method(){
        A a = new A();
        a.field = "value";
        a.method(); //같은 패키지는 proteced 제한 없음
    }
}
