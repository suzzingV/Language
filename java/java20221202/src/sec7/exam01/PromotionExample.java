package sec7.exam01;

class A{}

class B extends A{}
class C extends A{}

class D extends B{}
class E extends C{}

public class PromotionExample {
    public static void main(String[] args) {
        B b = new B();
        C c = new C();
        D d = new D();
        E e = new E();

        A a1 = b; //A가 b보다 더 상위 클래스면 자동타입변환 //바로 위 부모 아니어도 됨
        A a2 = c;
        A a3 = d;
        A a4 = e;

        B b1 = d;
        C c1 = e;

        //B b3 = e;
        //C c2 = d; //상속 관계 아니므로 컴파일 에러
    }
}