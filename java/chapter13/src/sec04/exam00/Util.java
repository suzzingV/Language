package sec04.exam00;
import sec02.exam00.*;

public class Util {
    public static <T> BoxG<T> boxing(T t) {
        BoxG<T> box = new BoxG<T>();
        box.set(t);
        return box;
    }
}
