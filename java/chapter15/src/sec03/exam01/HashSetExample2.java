package sec03.exam01;

import java.util.*;

public class HashSetExample2 {
    public static void main(String[] args) {
        Set<Member> set = new HashSet<Member>();

        set.add(new Member("홍길동", 30)); //주소값 달라서 hashCode()오버라이딩하기 전에는 해시코드 다름
        set.add(new Member("홍길동", 30));

        System.out.println("총 객체수:" + set.size());
    }
}
