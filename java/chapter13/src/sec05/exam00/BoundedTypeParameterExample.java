package sec05.exam00;

public class BoundedTypeParameterExample {
    public static void main(String[] args) {
        //String str = Util.compare("a", "b"); //NumberŸ�� �ƴ�

        int result1 = Util.compare(10, 20);
        System.out.println(result1);

        int result2 = Util.compare(4.5, 3); //double -> Double �ڵ� Boxing
        System.out.println(result2);
    }
}
