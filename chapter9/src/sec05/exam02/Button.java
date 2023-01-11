package sec05.exam02;

public class Button {
    OnClickListener listener;

    void setOnClickListener(OnClickListener listener) { //매개변수의 다형성
        this.listener = listener;
    }

    void touch() {
        listener.onClick();
    }

    interface OnClickListener{
        void onClick();
    }
}
