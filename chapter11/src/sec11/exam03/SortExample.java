package sec11.exam03;

import java.util.Arrays;

public class SortExample {
    public static void main(String[] args) {
        int[] scores = {99, 97, 98};
        Arrays.sort(scores);
        System.out.println(Arrays.toString(scores));
        System.out.println();

        String[] names = { "홍길동", "박동수", "김민수" };
        Arrays.sort(names);
        System.out.println(Arrays.toString(names));
        System.out.println();

        Member[] members = { new Member("홍길동"), new Member("박동수"), new Member("김민수") };
        Arrays.sort(members);
        System.out.print("[");
        for(int i = 0; i < members.length; i++) {
            System.out.print(members[i].name);
            if(i < members.length - 1) {
                System.out.print(", ");
            }
        }
        System.out.print("]");
    }
}
