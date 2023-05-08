package sec05.exam01;

import java.lang.System;

public class ExitExample {
    public static void main(String[] args) {
        System.setSecurityManager(new SecurityManager() { //보안관리자 설정
            @Override
            public void checkExit(int status) { //checkExit에서 상태값 조사
                if(status != 5) {
                    throw new SecurityException(); //5 아니면 예외 발생시킴
                }
            }
        });

        for(int i = 0; i < 10; i++) {
            System.out.println(i);
            try {
                System.exit(i);
            } catch (SecurityException e) { //SecurityException 발생 시 종료 안함
            }
        }
    }
}
