package sec11.exam03;

public class Member implements Comparable<Member> { //<>: Member타입만 비교하기 위해 제네릭 <> 사용
    String name;
    Member(String name) {
        this.name = name;
    }

    @Override
    public int compareTo(Member o) {
        return name.compareTo(o.name); //String의 compareTo
    }
    
}
