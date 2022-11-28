package GarbageValueExample;

public class GarbageValueExample {
    public static void main(String[] args) {
    byte var1 = 125;
    int var2 = 125;

    for(int i = 0; i < 5; i++)
    {
        var1++; //오버플로우 나면 -128부터 다시 시작
        var2++;
        System.out.println("var1 :" + var1 + "\t" + "var2 :" + var2);
    }
}
}
