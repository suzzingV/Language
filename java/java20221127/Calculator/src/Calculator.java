public class Calculator {
    int plus(int x, int y) {
        int result = x + y;
        return result;
    }

    double avg(int x, int y) {
        double result = plus(x, y) / 2;
        return result;
    }

    void execute() {
        double result = avg(7, 10);
        println("실행결과: " + result); //메소드 순서 상관 없음 //+ 붙이면 문자열 됨
    }

    void println(String message) {
        System.out.println(message);
    }
}
