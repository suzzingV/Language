package sec04.exam01;

public class Button {
    OnClickListener listener;

    void setOnClickListener(OnClickListener listener) {
        this.listener = listener; //구현 객체 필드에 넣기
    }

    void touch() {
        listener.onClick();
    }

    interface OnClickListener { //클래스 안의 인터페이스: 중첩 인터페이스
        void onClick();
    }
}
