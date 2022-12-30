package sec03.exam04;

public class Outter {
    String field = "Outter-field";
    
    void method() {
        System.out.println("Outter-method");
    }

    class Nested {
        String field = "Nested-field";
        void method() {
            System.out.println("Nested-method");
        }
        void print() {
            System.out.println(this.field); //중첩클래스의 필드
            this.method(); 
            System.out.println(Outter.this.field); //바깥 클래스의 필드 //앞에 아무것도 안 붙이면 중첩클래스 필드
            Outter.this.method();
        }
    }
}
