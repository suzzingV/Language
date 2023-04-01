package sec06.exam01;

import java.util.ResourceBundle;

import javax.swing.text.ChangedCharSetException;

import javafx.fxml.Initializable;
import javafx.scene.control.Slider;

public class RootController implements Initializable {
    @FXML private Slider slider;
    @FXML private Label label;

    @Override
    public void initialize(URL location, ResourceBundle resources) {
        slider.valueProperty().addListener(new ChangeListener<Number>() {
            @Override
            public void changed(ObservableValue<? extends Number> observable,
                                Number oldValue, Number newValue) {
                label.setFont(new Font(newValue.doubleValue()));
            }
        });
    }
    
}
