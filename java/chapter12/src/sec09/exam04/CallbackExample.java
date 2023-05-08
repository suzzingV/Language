package sec09.exam04;

import java.nio.channels.CompletionHandler;
import java.util.concurrent.*;

public class CallbackExample {
    private ExecutorService executorService;

    public CallbackExample() {
        executorService = Executors.newFixedThreadPool(
            Runtime.getRuntime().availableProcessors()
        );
    }

    private CompletionHandler<Integer, Void> callback = new CompletionHandler<Integer,Void>() {
        @Override
        public void completed(Integer result, Void attachment) {
            System.out.println("completed() ����: " + result);
        }

        @Override
        public void failed(Throwable exc, Void attachment) { //Throwable: ���� Ÿ��
            System.out.println("failed() ����: " + exc.toString());
        }
    };

    public void doWork(final String x, final String y) {
        Runnable task = new Runnable() {
            @Override
            public void run() {
                try {
                    int intX = Integer.parseInt(x);
                    int intY = Integer.parseInt(y);
                    int result = intX + intY;
                    callback.completed(result, null);
                } catch (NumberFormatException e) {
                    callback.failed(e, null);
                }
            }
        };
        
        executorService.submit(task);
    }

    public void finish() {
        executorService.shutdown();
    }

    public static void main(String[] args) {
        CallbackExample callbackExample = new CallbackExample();

        callbackExample.doWork("3", "3");
        callbackExample.doWork("3", "��");
        callbackExample.finish();
    }
}
