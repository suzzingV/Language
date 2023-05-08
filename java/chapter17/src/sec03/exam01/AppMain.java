package sec03.exam01;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.layout.*;
import javafx.scene.Parent;
import javafx.stage.*;
import javafx.scene.control.*;
import javafx.collections.*;
import javafx.geometry.*;

public class AppMain extends Application {
    @Override
    public void start(Stage primaryStage) throws Exception {
        HBox hbox = new HBox();
        hbox.setPadding(new Insets(10)); //왼쪽 여백 설정
        hbox.setSpacing(10); //컨트롤 간의 수평 간격 설정

        TextField textField = new TextField();
        textField.setPrefWidth(200); //TextField의 폭 설정

        Button button = new Button();
        button.setText("확인");

        ObservableList list = hbox.getChildren();
        list.add(textField);
        list.add(button);

        Scene scene = new Scene(hbox);

        primaryStage.setTitle("AppMain");
        primaryStage.setScene(scene);
        primaryStage.show();
    }

    public static void main(String[] args) {
        launch(args);
    }
}
