package sec09.exam03;

import java.util.concurrent.*;

public class ResultByRunnableExample {
    public static void main(String[] args) {
        ExecutorService executorService = Executors.newFixedThreadPool(
            Runtime.getRuntime().availableProcessors()
        );

        System.out.println("[작업 처리 요청]");
        class Task implements Runnable { //Result 객체 저장하기 위해 구현객체 사용
            Result result;

            Task(Result result) {
                this.result = result;
            }
            
            @Override
            public void run() {
                int sum = 0;
                for(int i = 1; i <= 10; i++) {
                    sum += i;
                }
                result.addValue(sum);
            }
        }

        Result result = new Result();
        Runnable task1 = new Task(result);
        Runnable task2 = new Task(result);
        Future<Result> future1 = executorService.submit(task1, result); //task1을 수행하고 result를 반환하겠다
        //result에 담기는게 아님 텅 비어있음
        Future<Result> future2 = executorService.submit(task2, result);

        try {
            result = future1.get();
            result = future2.get(); //두 가지 작업 결과 취합 //리턴값은 두번째 매개값으로 준 객체와 동일한데 차이점은 스레드 처리 결과가 내부에 저장되어 있다는 것
            //다 끝나고 하는 거라 둘중 하나만 해도 결과는 같음
            System.out.println("[처리 결과] " + result.accumValue);
            System.out.println("[작업 처리 완료]");
        } catch (Exception e) {
            System.out.println("[실행 예외 발생함] " + e.getMessage());
        }

        executorService.shutdown();
    }
}

class Result {
    int accumValue;
    synchronized void addValue(int value) { //공유객체
        accumValue += value;
    }
}