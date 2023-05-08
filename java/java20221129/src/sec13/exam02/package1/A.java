package sec13.exam02.package1;

public class A {
    A a1 = new A(true);
    A a2 = new A(1);
    A a3 = new A("문자열");

    public A(boolean b) {}; //생성자마다 접근 제한자 걸 수 있다
    A(int b) {};
    private A(String s) {};
}
