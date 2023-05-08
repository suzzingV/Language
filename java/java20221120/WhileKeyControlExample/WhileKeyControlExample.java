package WhileKeyControlExample;

public class WhileKeyControlExample {
    public static void main(String[] args) throws Exception { //System.in.read에 대한 예외처리
        boolean run = true;
        int keycode = 0;
        int speed = 0;

        while(run) {
            if (keycode != 13 && keycode != 10) { //enter의 키코드 엔터 치면 캐리지리턴 13, 라인피드 10
                System.out.println("-----------------------");
                System.out.println("1. 증속 | 2. 감속 | 3. 중단");
                System.out.println("-----------------------");
                System.out.print("선택 : "); //행 안 바꿈
            }
            
            keycode = System.in.read(); //키보드의 키 코드 읽음

            if (keycode == 49) {
                speed++;
                System.out.println("현재 속도 = " + speed);
            } else if (keycode == 50) {
                speed--;
                System.out.println("현재 속도 = " + speed);
            } else if (keycode == 51) {
                run = false;
            }
        }

        System.out.println("프로그램 종료");
    }
}
