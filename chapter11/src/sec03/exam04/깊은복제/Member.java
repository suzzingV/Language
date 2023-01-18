package sec03.exam04.깊은복제;

import java.util.Arrays;

public class Member {
    public String name;
    public int age;
    public int[] scores;
    public Car car;
    //참조타입필드는 얕은 복제할 경우 복제 객체에서 참조객체를 변경하면 원본객체도 변경된 객체를 가지게됨
    //그래서 깊은 복제 필요(참조하고 있는 객체도 복사, 다른 객체 가리킴)
    public Member(String name, int age, int[] scores, Car car) {
        this.name = name;
        this.age = age;
        this.scores = scores;
        this.car = car;
    }

    @Override
    protected Object clone() throws CloneNotSupportedException {
        Member cloned = (Member) clone();
        cloned.scores = Arrays.copyOf(this.scores, this.scores.length); //Arrays.copyOf(복사할 배열, 복사할 배열의 길이)
        cloned.car = new Car(this.car.model);
        return cloned;
    }

    @Override
    public Member getMember() {
        Member cloned = null;
        try {
            cloned = (Member)clone(); //재정의된 clone()메소드 호출
        } catch (CloneNotSupportedException e) {
            e.printStackTrace();
        }
        return cloned;
    }
}
