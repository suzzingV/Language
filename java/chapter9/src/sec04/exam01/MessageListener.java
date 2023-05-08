package sec04.exam01;

import sec04.exam01.Button.OnClickListener;

public class MessageListener implements OnClickListener {
    @Override
    public void onClick() {
        System.out.println("메시지를 보냅니다.");
    }
}
