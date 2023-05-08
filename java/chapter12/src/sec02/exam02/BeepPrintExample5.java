package sec02.exam02;

public class BeepPrintExample5 {
    public static void main(String[] args) {
        Thread thread = new BeepThread(); //Thread의 하위클래스 이용
        thread.start();

        for(int i = 0; i < 5; i++) {
            System.out.println("띵");
            try{ Thread.sleep(500); } catch(Exception e) {}
        }
    }
}
