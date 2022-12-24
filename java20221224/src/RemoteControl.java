public interface RemoteControl {
    public int MAX_VOLUME = 10; //상수 필드 선언 //초기화 무조건 해야함 //public static final 안 붙여도 자동으로 붙음
    public int MIN_VOLUME = 0;
    //인터페이스는 상수만 정의할 수 있음

    public void turnOn();
    public void turnOff();
    public void setVolume(int volume);
    //추상메소드 선언 //public abstract 안붙여도 자동으로 붙음 //중괄호 없는

    //디폴트 메소드
    default void setMute(boolean mute) {
        if(mute) {
            System.out.println("무음 처리합니다.");
        } else {
            System.out.println("무음 해제합니다.");
        }
    }
}
