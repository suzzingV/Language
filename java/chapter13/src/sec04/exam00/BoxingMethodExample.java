package sec04.exam00;

import sec02.exam00.*;

public class BoxingMethodExample {
    public static void main(String[] args) {
        BoxG<Integer> box1 = Util.<Integer>boxing(100); //�����
        int intValue = box1.get();

        BoxG<String> box2 = Util.boxing("ȫ�浿"); //����
        String strValue = box2.get();
    }
}
