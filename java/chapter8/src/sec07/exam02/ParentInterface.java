package sec07.exam02;

public interface ParentInterface {
    public void method1();
    public default void method2() {/*실행문 */};
}
