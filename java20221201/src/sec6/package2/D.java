package sec6.package2;
import sec6.package1.A;

public class D extends A {
    public D() {
        super(); //A 생성자 호출
        this.field = "value";
        this.method(); //다른 패키지여도 자식 클래스에서 protected 사용 가능
    }
}
