package sec03.exam02;

import java.util.HashMap;

public class KeyExample {
    public static void main(String[] args) {
        HashMap<Key, String> hashMap = new HashMap<Key, String>(); //HashSet, HashMap, Hashtable은 해쉬코드 이용해 동등함 판별
        //해쉬 코드 값같으면 equals이용해 동등판별
        //메소드 재정의 안하면 Object의 hashCode() 사용

        hashMap.put(new Key(1), "홍길동");
        
        String value = hashMap.get(new Key(1)); //위와 다른 객체
        //재정의하면 다른 객체를 같은 객체로 취급할 수 있다
        System.out.println(value);
    }
}
