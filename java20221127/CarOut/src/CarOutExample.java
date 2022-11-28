public class CarOutExample {
    public static void main(String[] args) {
        CarOut myCar = new CarOut();
        myCar.keyTurnOn();
        myCar.run();

        int speed = myCar.getSpeed();
        System.out.println("현재속도: " + speed + "km/h");
    }
}
