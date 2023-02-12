package sec08.exam01;

public class StringSplitExample {
    public static void main(String[] args) {
        String text = "홍길동&이수홍,박연수,김자바-최명호";
        
        String[] names = text.split("&|,|-"); //str.split("정규표현식"): 정규표현식 빼고 문자열 추출해서 배열에 나눠 넣음
        
        for(String name : names) {
            System.out.println(name);
        }
    }
}
