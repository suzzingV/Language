package sec07.exam00;

public interface Storage<T> {
    public void add(T item, int index);
    public T get(int index);
}
