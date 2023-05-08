package sec06.exam01;

import java.awt.Toolkit;

public class SleepExample{
    public static void main(String[] args) {
        Toolkit toolkit = Toolkit.getDefaultToolkit();
        for(int i = 0; i < 10; i++) {
            toolkit.beep();
            try {
                Thread.sleep(3000);
            } catch(InterruptedException e) { //주어진 시간 되기전에 interrupt() 메소드 호출되면 예외발생
            }
        }
    }
}