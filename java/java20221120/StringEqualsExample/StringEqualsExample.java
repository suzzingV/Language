package StringEqualsExample;

public class StringEqualsExample {
    public static void main(String[] args) {
        String strVar1 = "신민철";
        String strVar2 = "신민철";
    
        if(strVar1 == strVar2) { //문자열 같으면 같은 번지 //번지수 비교
            System.out.println("strVar1과 strVar2는 참조가 같음");
        } else {
            System.out.println("strVar1과 strVar2는 참조가 다름");
        }
        
        if(strVar1.equals(strVar2)) { //문자열 비교
            System.out.println("strVar1과 strVar2는 문자열이 같음");
        }

        String strVar3 = new String("신민철"); //새로운 객체 만들어서 저장
        String strVar4 = new String("신민철");

        if(strVar3 == strVar4) { //문자열 같으면 같은 번지 //번지수 비교
            System.out.println("strVar1과 strVar2는 참조가 같음");
        } else {
            System.out.println("strVar1과 strVar2는 참조가 다름");
        }

        if(strVar3.equals(strVar4)) { //문자열 비교
            System.out.println("strVar1과 strVar2는 문자열이 같음");
        }
    }
}

//참조 변수에 null대입할 수 있음 -> 참조 잃은 객체는 쓰레기객체, 쓰레기 수집기 가동해 메모리에서 자동 제거