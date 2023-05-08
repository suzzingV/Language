package sec09.exam03;

import java.util.concurrent.*;

public class CompletionServiceExample {
    public static void main(String[] args) {
        ExecutorService executorService = Executors.newFixedThreadPool(
            Runtime.getRuntime().availableProcessors()
        );

        CompletionService<Integer> completionService = 
            new ExecutorCompletionService<Integer>(executorService); //CompletionService의 구현 객체
        
        System.out.println("[작업 처리 요청]");
        for(int i = 0; i < 3; i++) {
            completionService.submit(new Callable<Integer>() { //스레드풀에게 작업 처리 요청
                @Override
                public Integer call() {
                    int sum = 0;
                    for(int i = 1; i <= 10; i++) {
                        sum += i;
                    }
                    return sum;
                }
            });
        }

        System.out.println("[처리 완료된 작업 확인]");
        executorService.submit(new Runnable() { //while문은 애플리케이션 종료될 때까지 반복실행해야하므로 스레드풀의 스레드에서 실행하는 게 좋다
            @Override
            public void run() {
                while(true) {
                    try {
                        Future<Integer> future = completionService.take(); //완료된 작업 가져오기
                        int value = future.get();
                        System.out.println("[처리 결과] " + value);
                    } catch (Exception e) { //더이상 처리완료된 거 없으면 예외 발생
                        break;
                    }
                }
            }
        });

        try {
            Thread.sleep(3000);
        } catch (InterruptedException e) {}
        executorService.shutdownNow();
    }
}
