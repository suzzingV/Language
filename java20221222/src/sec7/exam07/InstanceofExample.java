package sec7.exam07;

public class InstanceofExample {
    public static void method1(Parent parent) {
        if(parent instanceof Child) { //객체 instanceof 타입: 해당 타입이 맞으면 true, 아니면 false 반환
            Child child = (Child)parent;
            System.out.println("method1 - Child로 변환 성공");
        } else {
            System.out.println("method1 - Child로 변환되지 않음");
        }
    }

    public static void method2(Parent parent) {
        Child child = (Child)parent;
        System.out.println("method2 - Child로 변환 성공");
    }

    public static void main(String[] args) {
        Parent parent1 = new Child();
        method1(parent1);
        method2(parent1);
        
        Parent parent2 = new Parent();
        method1(parent2);
        method2(parent2); //예외 발생: 적절한 매개값 아님
    }
}
