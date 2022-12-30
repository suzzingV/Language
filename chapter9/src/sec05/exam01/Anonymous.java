package sec05.exam01;

public class Anonymous {
    //필드 초기값으로 대입
    Person field = new Person() { //익명의 자식 개체 만들기, 부모클래스로 시작
        void work() {
            System.out.println("출근합니다.");
        } //익명 객체 안에서만 사용 가능

        @Override
        void wake() {
            System.out.println("6시에 일어납니다.");
            work();
        }
    };
    
    void method1() {
        //로컬 변수값으로 대입
        Person localVar = new Person() {
            void walk() {
                System.out.println("산책합니다.");
            }

            @Override
            void wake() {
                System.out.println("7시에 일어납니다.");
                walk();
            }
        };

        localVar.wake(); //localVar에는 부모클래스에 있는 것만 사용 가능
    }
}
