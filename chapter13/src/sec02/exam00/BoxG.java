package sec02.exam00;

public class BoxG<T> {
    private T t; //Ÿ�� �ԷµǸ� T�� �� Ÿ������ ��
    public void set(T t) {
        this.t = t;
    }
    public T get() {
        return t;
    }
}
