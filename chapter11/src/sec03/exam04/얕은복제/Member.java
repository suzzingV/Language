package sec03.exam04.얕은복제;

public class Member implements Cloneable { //객체복제하려면 원본 객체는 반드시 Cloneable인터페이스 명시적 구현 해야한다.(클래스 설계자가 복제를 허용한다는 표시)
    //인터페이스 구현 안하면 예외 발생 -> 예외 처리 해줘야함
    public String id;
    public String name;
    public String password;
    public int age;
    public boolean adult;

    public Member(String id, String name, String password, int age, boolean adult) {
        this.id = id;
        this.name = name;
        this.password = password;
        this.age = age;
        this.adult = adult;
    }

    public Member getMember() {
        Member cloned = null;

        try {
            cloned = (Member) clone(); //cloned() 메소드의 리턴타입은 Object이므로 캐스팅해야함
        } catch(CloneNotSupportedException e) { } //clone()은 예외처리 필요
        return cloned;
    }
}
