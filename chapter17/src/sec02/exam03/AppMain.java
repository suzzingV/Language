package sec02.exam03;

import javafx.application.*;
import javafx.scene.*;
import javafx.stage.*;
import javafx.scene.layout.*;
import javafx.scene.control.*;
import javafx.geometry.*;
import javafx.scene.text.*;

public class AppMain extends Application {
    @Override
    public void start(Stage primaryStage) throws Exception {
        VBox root = new VBox(); //Parent�� ���� ��ü
        root.setPrefWidth(350); //VBox�� �� ����
        root.setPrefHeight(150); //VBox�� ���� ����
        root.setAlignment(Pos.CENTER); //��Ʈ���� �߾����� ����
        root.setSpacing(20); //��Ʈ���� ���� ����

        Label label = new Label();
        label.setText("Hello, JavaFX");
        label.setFont(new Font(50));

        Button button = new Button();
        button.setText("Ȯ��");
        button.setOnAction(event -> Platform.exit());

        root.getChildren().add(label);
        root.getChildren().add(button);

        Scene scene = new Scene(root);

        primaryStage.setTitle("AppMain");
        primaryStage.setScene(scene);
        primaryStage.show();
    }

    public static void main(String[] args) {
        launch(args);
    }
}
