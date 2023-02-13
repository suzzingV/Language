package sec10.exam02;

import java.util.regex.Pattern;

public class PatternExample {
    public static void main(String[] args) {
        String regExp = "(02|010)-\\d{3,4}-\\d{4}";
        String data = "010-123-4567";
        boolean result = Pattern.matches(regExp, data); //Pattern.matches(정규표현식, 문자열): 정규표현식 검증 기능
        if(result) {
            System.out.println("정규식과 일치합니다.");
        } else {
            System.out.println("정규식과 일치하지 않습니다.");
        }
        
        regExp = "\\w+@\\w+\\. \\w+(\\.\\w+)?"; //\.: . .: 모든 문자중에서 한 개의 문자
        data = "angel@navercom";
        result = Pattern.matches(regExp, data);
        if(result) {
            System.out.println("정규식과 일치합니다.");
        } else {
            System.out.println("정규식과 일치하지 않습니다.");
        }
    }
}
