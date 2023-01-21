package sec04.exam02;

import java.util.Objects;
import java.util.Arrays;

public class EqualsAndDeepEqualsExample {
    public static void main(String[] args) {
        Integer o1 = 1000;
        Integer o2 = 1000;

        System.out.println(Objects.equals(o1, o2)); //Objects.equals(Object a, Object b) : 두객체의 동등 비교
        System.out.println(Objects.equals(o1, null));
        System.out.println(Objects.equals(null, o2));
        System.out.println(Objects.equals(null, null));
        System.out.println(Objects.deepEquals(o1, o2) + "\n"); //배열 아닌 것은 equals랑 리턴값 똑같음

        Integer[] arr1 = { 1, 2 };
        Integer[] arr2 = { 1, 2 };
        System.out.println(Objects.equals(arr1, arr2)); //번지수 다르므로 다른 배열
        System.out.println(Objects.deepEquals(arr1, arr2)); //Objects.deepEquals(Object[] a, Object[] b) : 두 객체의 동등, 서로 다른 배열일 경우 항목 값이 같다면 true리턴, 배열 아니면 a.equals(b)의 리턴값
        System.out.println(Arrays.deepEquals(arr1, arr2)); //배열이면 Arrays.deepEquals의 리턴값
        System.out.println(Objects.deepEquals(null, arr2));
        System.out.println(Objects.deepEquals(arr1, null));
        System.out.println(Objects.deepEquals(null, null));    
    }
}
