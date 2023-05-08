package sec09.exam01;

public class StringBuilderExample {
    public static void main(String[] args) {
        StringBuilder sb = new StringBuilder();

        sb.append("Java "); //문자열을 끝에 추가
        sb.append("Program Study");
        System.out.println(sb.toString()); //toString(): 문자열로 바꿔줌

        sb.insert(4, "2"); //4번째 인덱스에 2 삽입
        System.out.println(sb.toString());

        sb.setCharAt(4, '6'); //4번째 인덱스의 문자를 6으로 변경
        System.out.println(sb.toString());

        sb.replace(6, 13, "Book"); //6부터 13전 인덱스까지를 Book로 대치
        System.out.println(sb.toString());

        sb.delete(4, 5); //4부터 5전 인덱스까지 삭제
        System.out.println(sb.toString());
        
        int length = sb.length(); //총 문자수
        System.out.println("총문자수: " + length);

        String result = sb.toString(); //버퍼에 있는 걸 String타입으로 리턴
        System.out.println(result);
    }
}
