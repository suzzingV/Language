package sec07.exam00;

public class Product<T, M> {
    private T kind;
    private M model;

    public T getKind() { return this.kind; };
    public M getModel() { return this.model; };

    public void setKind(T t) { this.kind = kind; };
    public void setModel(M m) { this.model = model; };
}

class Tv {}
