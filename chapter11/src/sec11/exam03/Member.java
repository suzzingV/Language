package sec11.exam03;

public class Member implements Comparable<Member> { //<>: Member타입만 비교하기 위해 제네릭 <> 사용
    String name;
    Member(String name) {
        this.name = name;
    }

    @Override
    public int compareTo(Member o) { //이거 해줘야 이거 이용해서 비교하므로 Arrays.sort() 사용 가능
        return name.compareTo(o.name); //String의 compareTo
    }
    
}
