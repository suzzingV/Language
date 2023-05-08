package sec11.exam03;

import java.util.Arrays;

public class SearchExample {
    public static void main(String[] args) {
        int[] scores = {99, 97, 98};
        Arrays.sort(scores);
        int index = Arrays.binarySearch(scores, 99); //Arrays.binarySearch(배열, 찾을 내용): 찾을 내용의 인덱스 리턴, 배열 오름차순으로 정렬하고 해야함
        System.out.println("찾은 인덱스: " + index);

        String[] names = { "홍길동", "박동수", "김민수" };
        Arrays.sort(names);
        index = Arrays.binarySearch(names, "홍길동");
        System.out.println("찾은 인덱스: " + index);

        Member[] members = { new Member("홍길동"), new Member("박동수"), new Member("김민수") };
        Arrays.sort(members);
        index = Arrays.binarySearch(members, new Member("홍길동"));
        System.out.println("찾은 인덱스: " + index);
    }
}
