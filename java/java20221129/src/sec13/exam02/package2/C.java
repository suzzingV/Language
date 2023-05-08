package sec13.exam02.package2;

import sec13.exam02.package1.*;

public class C {
    A a1 = new A(true);
    A a2 = new A(1); //default 다른 패키지면 안됨
    A a3 = new A("문자열");
}
