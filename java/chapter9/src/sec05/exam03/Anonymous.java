package sec05.exam03;

public class Anonymous {
    private int field;

    public void method(final int arg1, int arg2) {
        final int var1 = 0;
        int var2 = 0;

        //var1 = 10;
        //var2 = 10;
        //arg1 = 10;
        //arg2 = 10;
        //final 붙든 안 붙든 익명객체에서 사용된 매개변수와 로컬변수는 final 특성 가진다
        //final 키워드 있으면 메소드 내부에 지역변수로 복사됨
        //final 키워드 없으면 익명클래스의 필드로 복사됨
        field = 10;

        Calculatable calc = new Calculatable() {
            @Override
            public int sum() {
                int result = arg1 + arg2 + var1 + var2;
                return result;
            }
        };

        System.out.println(calc.sum());
    }
}
