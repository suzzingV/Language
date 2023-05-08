package sec02.exam00;

public class BoxExample {
    public static void main(String[] args) {
        Box box = new Box();
        box.set("홍길동");
        String name  = (String) box.get(); //캐스팅해야함
        
        box.set(new Apple());
        Apple apple = (Apple)box.get();
    }
}
