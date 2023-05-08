package sec7.exam04;

public class HankookTire extends Tire {
    public HankookTire (String location, int maxRotation) {
        super(location, maxRotation); //부모 생성자 호출
    }

    @Override
    public boolean roll() {
        ++accumulationRotation;
        if(accumulationRotation < maxRotation) {
            System.out.println(location + "HankookTire 수명: " + (maxRotation - accumulationRotation) + "회");
            return true;
        } else {
            System.out.println("*** " + location + "HankookTire 펑크 ***");
            return false;
        }
    }
}
