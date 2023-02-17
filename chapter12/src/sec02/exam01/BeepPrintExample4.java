package sec02.exam01;

import java.awt.Toolkit;

public class BeepPrintExample4 {
    public static void main(String[] args) {
        Thread thread = new Thread(() -> { //람다식사용
            Toolkit toolkit = Toolkit.getDefaultToolkit();
        
            for(int i = 0; i < 5; i++) {
                toolkit.beep();
                try{ Thread.sleep(500); } catch(Exception e) {}
            }
        });
        thread.start();

        for(int i = 0; i < 5; i++) {
            System.out.println("띵");
            try {Thread.sleep(500);} catch(Exception e) {}
        }
        //동시에 실행
    }
}
