package sec07.exam01;

public interface MyInterface {
    public void method1();

    public default void method2() { //디폴트 메소드 default 붙여줘야 됨
        System.out.println("MyInterface-method2 실행");
    }
}
