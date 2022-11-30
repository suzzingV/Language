package sec04;

public class Computer extends Calculator {
    @Override //안 붙여도 되지만 붙이면 더 정확
    double areaCircle(double r) {
        System.out.println("Computer 객체의 areaCircle() 실행");
        return Math.PI * r * r;
    }
}
