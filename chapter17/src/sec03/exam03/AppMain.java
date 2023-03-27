package sec03.exam03;

import javafx.application.*;
import javafx.stage.*;
import javafx.scene.layout.HBox;
import javafx.scene.control.*;
import javafx.geometry.*;

public class AppMain extends Application {
    @Override
    public void start(Stage primaryStage) throws Exception {
        /*
        HBox hbox = new HBox();
        hbox.setPadding(new Insets(50, 10, 10, 50));
        Button button = new Button();
        button.setPrefSize(100,100);   
        */
        
        HBox hbox = new HBox();
        Button button = new Button();
        button.setPrefSize(100, 100);
        HBox.setMargin(button, new Insets(10, 10, 50, 50));
    }
}
