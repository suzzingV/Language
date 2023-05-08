package sec05.exam02;

public class Anonymous {
    RemoteControl field = new RemoteControl() {
         //필드의 초기값에 구현 클래스 대입
        @Override
        public void turnOn() {
           System.out.println("TV를 켭니다."); //추상메소드 실체메소드로 재정의해줘야 함
        }
        @Override
        public void turnOff() {
            System.out.println("TV를 끕니다.");
        }
    };

    void method1() {
        RemoteControl localVar = new RemoteControl() {
            //로컬 변수값으로 대입
            @Override
            public void turnOn() {
                System.out.println("Audio를 켭니다.");
            }
            @Override
            public void turnOff() {
                System.out.println("Audio를 끕니다.");
            }
        };
        
        localVar.turnOn();
    }

    void method2(RemoteControl rc) {
        rc.turnOn();
    }
}
