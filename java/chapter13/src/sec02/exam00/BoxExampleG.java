package sec02.exam00;

public class BoxExampleG {
    public static void main(String[] args) {
        BoxG<String> box1 = new BoxG();
        box1.set("hello");
        String str = box1.get(); //ĳ���� ���ص� ��

        BoxG<Integer> box2 = new BoxG();
        box2.set(6);
        int value = box2.get();
    }
}
