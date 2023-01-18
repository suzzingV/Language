package sec03.exam02;

public class Key {
    public int number;

    public Key(int number) {
        this.number = number;
    }

    @Override
    public boolean equals(Object obj) {
        if(obj instanceof Key) {
            Key compareKey = (Key)obj;
            if(this.number == compareKey.number) {
                return true;
            }
        }
        return false;
    }


    @Override
    public int hashCode(){ //hashCode 재정의 해줘야 number같으면 같은 객체로 인식
        return number;
    }

}
