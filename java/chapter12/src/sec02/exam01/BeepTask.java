package sec02.exam01;

import java.awt.*;

public class BeepTask implements Runnable{ //Runnable은 인터페이스
    public void run() {
        Toolkit toolkit = Toolkit.getDefaultToolkit();
        
        for(int i = 0; i < 5; i++) {
            toolkit.beep();
            try { Thread.sleep(500); } catch(Exception e) {}
        }
    }
}
