package sec02.exam01;

import java.lang.Runnable;
import java.awt.*;

public class BeepPrintExample3 {
    public static void main(String[] args) {
        Thread thread = new Thread(new Runnable() { //익명 객체 사용
            @Override
            public void run() {
            Toolkit toolkit = Toolkit.getDefaultToolkit();
        
            for(int i = 0; i < 5; i++) {
                toolkit.beep();
                try{ Thread.sleep(500); } catch(Exception e) {}
            }
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
