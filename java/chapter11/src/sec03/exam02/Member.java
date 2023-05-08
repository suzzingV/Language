package sec03.exam02;

public class Member {
    public String id;
    
    public Member(Object obj) {
        this.id = id;
    }

    @Override //자바의 모든 클래스는 Object를 상속받음 //equals는 Object의 메소드
    public boolean equals(Object obj) { //자바의 모든 클래스는 Object를 상속받으므로 Object로 자동타입변환 가능
        if(obj instanceof Member) {
            Member member = (Member) obj; //원래 Member였던것들 강제타입변환 가능
            if(id.equals(member.id)) {
                return true;
            }
        }
        return false;
    }

    @Override
    public int hashCode() {
        return id.hashCode(); //String의 hashCode()는 동일한 문자열일 경우 같은 hashCode 리턴
    }
}
