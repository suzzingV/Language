package sec04.exam02;

public class SupersonicAirplane extends Airplane {
    public static final int NORMAL = 1; //상수: static 이면서 final
    public static final int SUPERSONIC = 2;

    public int flyMode = NORMAL;

    @Override
    public void fly() {
        if(flyMode == SUPERSONIC) {
            System.out.println("초음속비행합니다.");
        } else {
            super.fly(); //부모 클래스의 fly 호출
        }
    }
}
