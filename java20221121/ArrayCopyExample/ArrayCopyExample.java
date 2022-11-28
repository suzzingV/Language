package ArrayCopyExample;

public class ArrayCopyExample {
    public static void main(String[] args) {
        String[] oldStrArray = {"java", "array", "copy"};
        String[] newStrArray = new String[5];

        System.arraycopy(oldStrArray, 0, newStrArray, 0, oldStrArray.length);
        //System.arraycopy(원본, 원본 시작 인덱스, 복사, 복사 시작 인덱스, 붙여넣을 길이)
        
        for(int i = 0; i < newStrArray.length; i++) {
            System.out.print(newStrArray[i] + ", ");
        }
    }
}
//참조타입 배열일 경우 배열 복사 되면 복사되는 값은 객체의 번지 -> 새 배열의 항목은 이전 배열의 항목이 참조하는 객체와 동일 -> 얕은 복사
//깊은 복사: 참조하는 객체도 별도로 생성