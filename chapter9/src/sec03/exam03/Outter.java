package sec03.exam03;

public class Outter {
    //자바7 이전
    public void method1(final int arg) { //final 붙여야 로컬 클래스 안에서 사용 가능
        final int localVariable = 1; //final 붙여야 로컬 클래스 안에서 사용 가능
        //로컬 변수랑 매개변수 말고 바깥 클래스의 필드와 메소드는 모두 사용 가능
        //arg = 100; (x) //수정 불가(복사해서 사용함)
        //localVarible = 100; (x)
        class Inner {
            public void method() {
                int result = arg + localVariable;
            }
        }
    }

    //자바8 이후
    public void method2(int arg) { //final 안붙여도 final의 특징 갖도록
        int localVariable = 1;
        //arg = 100;
        //localVariable = 100;
        class Inner {
            public void method() {
                int result = arg + localVariable;
            }
        }
    }
}
