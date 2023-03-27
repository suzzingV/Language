package sec02.exam02;

import javafx.application.*;
import javafx.stage.*
;
public class AppMain extends Application{
    public AppMain() {
        System.out.println(Thread.currentThread().getName() + " : AppMain ȣ��");
    }

    @Override
    public void init() throws Exception {
        System.out.println(Thread.currentThread().getName() + " : init() ȣ��");
    }

    @Override
    public void start(Stage primaryStage) throws Exception {
        System.out.println(Thread.currentThread().getName() + " : start() ȣ��");
        primaryStage.show();
    }

    @Override
    public void stop() throws Exception {
        System.out.println(Thread.currentThread().getName() + " : stop() ȣ��");
    }

    public static void main(String[] args) {
        System.out.println(Thread.currentThread().getName() + " : main() ȣ��");
        launch(args);
    }
}
