package sec05.exam00;

public class Util {
    public static <T extends Number> int compare(T t1, T t2) {
        double v1 = t1.doubleValue(); //Number클래스에 정의된 메소드
        double v2 = t2.doubleValue();
        return Double.compare(v1, v2);
    }
}
