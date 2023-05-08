package sec7.exam02;

public class ChildExample {
    public static void main(String[] args) {
        Child child = new Child();
        
        Parent parent = child;
        parent.method1(); //자동 타입 변환 일어나서 접근 가능
        parent.method2(); //오버라이딩 된 메소드는 자식클래스꺼로
        //parent.method3(); //자동 타입 변환 일어났기 때문에 자식 클래스의 메소드 접근 불가능
    }
}
