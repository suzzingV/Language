package sec04.exam01;

import sec04.exam01.Button.OnClickListener;

public class CallListener implements OnClickListener {
    @Override
    public void onClick() {
        System.out.println("전화를 겁니다.");
    }
}
