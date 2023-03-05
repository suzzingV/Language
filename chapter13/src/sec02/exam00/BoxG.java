package sec02.exam00;

public class BoxG<T> {
    private T t; //타입 입력되면 T가 그 타입으로 됨
    public void set(T t) {
        this.t = t;
    }
    public T get() {
        return t;
    }
}
