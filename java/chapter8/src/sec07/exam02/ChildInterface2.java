package sec07.exam02;

public interface ChildInterface2 extends ParentInterface {
    @Override
    public default void method2() {/*실행문 */}; //재정의한 메소드로 실행됨

    public void method3();
    
}
