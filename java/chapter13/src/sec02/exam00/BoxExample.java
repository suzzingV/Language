package sec02.exam00;

public class BoxExample {
    public static void main(String[] args) {
        Box box = new Box();
        box.set("ȫ�浿");
        String name  = (String) box.get(); //ĳ�����ؾ���
        
        box.set(new Apple());
        Apple apple = (Apple)box.get();
    }
}
