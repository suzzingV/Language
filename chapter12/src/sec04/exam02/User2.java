package sec04.exam02;

public class User2 extends Thread {
    private Calculator calculator;

    public void setCalculator(Calculator calculator) {
        this.setName("User2"); //setName() : 스레드 이름 설정
        this.calculator = calculator;
    }

    public void run() {
        calculator.setMemory(50);
    }
}
