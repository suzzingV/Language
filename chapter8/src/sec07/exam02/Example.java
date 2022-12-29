package sec07.exam02;

public class Example {
    public static void main(String[] args) {
        ChildInterface1 ci1 = new ChildInterface1() { //구현 객체 바로 만들기
            @Override
            public void method1() { /*실행문 */};

            @Override
            public void method3() { /*실행문 */};
        };

        ci1.method1();
        ci1.method2();
        ci1.method3();

        ChildInterface2 ci2 = new ChildInterface2() { //구현 객체 바로 만들기
            @Override
            public void method1() { /*실행문 */};

            @Override
            public void method3() { /*실행문 */};
        };

        ci2.method1();
        ci2.method2();
        ci2.method3();

        ChildInterface3 ci3 = new ChildInterface3() { //구현 객체 바로 만들기
            @Override
            public void method1() { /*실행문 */};

            @Override
            public void method2() { /*실행문 */}; //추상메소드로 재선언 됐기 때문에 실체메소드 구현해줘야

            @Override
            public void method3() { /*실행문 */};
        };

        ci3.method1();
        ci3.method2();
        ci3.method3();
    }
}
