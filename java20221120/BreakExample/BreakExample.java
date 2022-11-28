package BreakExample;

public class BreakExample {
    public static void main(String[] args) {
        while (true) {
            int num = (int)(Math.random() * 6) + 1; //Math.random(): 0.0 <= Math.random() < 1.0 부동소수점

            System.out.println(num);
            if(num == 6) {
                break;
            }
        }

        System.out.println("프로그램 종료");
    }
}

/*
바깥쪽 반복문까지 종료시키고 싶으면
Label: for()
for()
break Label;
 */