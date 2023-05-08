package sec11.exam01;

import java.util.Arrays;

public class ArrayCopyExample {
    public static void main(String[] args) {
        char[] arr1 = {'J', 'A', 'V', 'A'};

        char[] arr2 = Arrays.copyOf(arr1, arr1.length); //Arrays.copyOf(arr1, 길이): 0번째 인덱스부터 길이만큼 arr1을 복사
        System.out.println(Arrays.toString(arr2)); //Arrays.toString(arr): 배열을 문자열로 바꿔줌
        
        char[] arr3 = Arrays.copyOfRange(arr1, 1, 3); //Arrays.copyOfRange(arr, start, end): start인덱스부터 end인덱스 전까지 arr 복사
        System.out.println(Arrays.toString(arr3));

        char[] arr4 = new char[arr1.length];
        System.arraycopy(arr1, 0, arr4, 0, arr1.length); //System.arraycopy(arr1, i, arr2, j, l): arr1의 i번쨰 인덱스부터 l만큼을 arr2의 j번째 인덱스부터 붙여넣음
        //밀리는 게 아니라 대체됨
        for(int i = 0; i < arr4.length; i++) {
            System.out.println("arr4[" + i + "]=" + arr4[i]);
        }
    }
}
