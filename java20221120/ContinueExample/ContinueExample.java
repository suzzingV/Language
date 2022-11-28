package ContinueExample;

public class ContinueExample {
    public static void main(String[] args) {
        for (int i = 1; i <= 10; i++) {
            if (i % 2 != 0)
                continue; //조건식으로 돌아감(while, do while도)
            System.out.println(i);
        }
    }
}
