package sec7.exam06;

public class ChildExample {
    public static void main(String[] args) {
        Parent parent = new Child(); //Parent로 자동 형변환
        parent.field1 = "data1";
        parent.method1();
        parent.method2();
        /*
        parent.field2 = "data2"; //자식 클래스에 있는 필드와 메소드 사용 불가
        parent.method3();
        */
        
        Child child = (Child)parent; //강제 타입 변환: 자동형변환 당한 부모클래스를 자식클래스로 강제 형변환
        child.field2 = "yyy";
        child.method3();
    }
}
