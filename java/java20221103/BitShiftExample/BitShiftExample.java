package BitShiftExample;

public class BitShiftExample {
    public static void main(String[] args) {
        System.out.println("1 << 3 = " + (1 << 3)); //1을 3만큼 왼쪽으로 비트이동 //새로생긴 공간은 0으로 채움 밀린건 버림
        System.out.println("-8 >> 3 = " + (-8 >> 3)); //-8을 3만큼 오른쪽으로 비트이동 //새로생긴 공간은 부호비트랑 동일한 수로 채움
        System.out.println("-8 >>> 3 = " + (-8 >>> 3)); //-8을 3만큼 오른쪽으로 비트이동 //새로 생긴공간 무조건 0으로 채움
    }
}
