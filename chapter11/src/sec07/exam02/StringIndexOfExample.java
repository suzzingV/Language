package sec07.exam02;

public class StringIndexOfExample {
    public static void main(String[] args) {
        String subject = "자바 프로그래밍";
        
        int location = subject.indexOf("프로그래밍"); //string.indexOf(string1) : string1이 있는 인덱스 반환 없으면 -1 반환
        System.out.println(location);

        if(subject.indexOf("자바") != -1) {
            System.out.println("자바와 관련된 책이군요.");
        } else {
            System.out.println("자바와 관련 없는 책이군요.");
        }
    }
}
