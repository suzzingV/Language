package sec04.exam01;

public class UsingThis {
    public int outterField = 10;

    class Inner {
        int innerField = 20;

        void method() {
            MyFunctionalInterface fi = () -> {
                System.out.println("outterField: " + outterField);
                System.out.println("outterField: " + UsingThis.this.outterField + "\n");
                //�ٱ� ��ü ���� ���� Ŭ������.this

                System.out.println("innerField: " + innerField);
                System.out.println("innerField: " + this.innerField);
            };
            fi.method();
        }
    }
}
