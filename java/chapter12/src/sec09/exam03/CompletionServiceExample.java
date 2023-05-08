package sec09.exam03;

import java.util.concurrent.*;

public class CompletionServiceExample {
    public static void main(String[] args) {
        ExecutorService executorService = Executors.newFixedThreadPool(
            Runtime.getRuntime().availableProcessors()
        );

        CompletionService<Integer> completionService = 
            new ExecutorCompletionService<Integer>(executorService); //CompletionService�� ���� ��ü
        
        System.out.println("[�۾� ó�� ��û]");
        for(int i = 0; i < 3; i++) {
            completionService.submit(new Callable<Integer>() { //������Ǯ���� �۾� ó�� ��û
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

        System.out.println("[ó�� �Ϸ�� �۾� Ȯ��]");
        executorService.submit(new Runnable() { //while���� ���ø����̼� ����� ������ �ݺ������ؾ��ϹǷ� ������Ǯ�� �����忡�� �����ϴ� �� ����
            @Override
            public void run() {
                while(true) {
                    try {
                        Future<Integer> future = completionService.take(); //�Ϸ�� �۾� ��������
                        int value = future.get();
                        System.out.println("[ó�� ���] " + value);
                    } catch (Exception e) { //���̻� ó���Ϸ�� �� ������ ���� �߻�
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
