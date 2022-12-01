package sec6.package2;
import sec6.package1.*
;
public class C {
    public void method() {
        A a = new A();
        a.field = "value";
        a.method(); //다른 패키지에서 protected 사용 불가능
    }
}
