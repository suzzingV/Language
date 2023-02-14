package sec12.exam01;

public class BoxingUnBoxingExample {
    public static void main(String[] args) {
        Integer obj1 = new Integer(100); //박싱
        Integer obj2 = new Integer("200");
        Integer obj3 = Integer.valueOf("300"); //각 포장 클래스마다 가지고 있는 정적 valueOf()메소드 사용
        
        int value1 = obj1.intValue();
        int value2 = obj2.intValue();
        int value3 = obj3.intValue();

        System.out.println(value1);
        System.out.println(value2);
        System.out.println(value3);
    }
}
