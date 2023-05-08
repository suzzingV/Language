package sec03.exam00;

public class Product <T, M> { //바로 클래스 이름에 적용 가능
    private T kind;
    private M model;
    
    public T getKind() { return this.kind; }
    public M getModel() { return this.model; };

    public void setKind(T kind) { this.kind = kind; };
    public void setModel(M model) { this.model = model; };
}
