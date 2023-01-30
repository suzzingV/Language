package sec05.exam04;

import java.lang.System;
import java.util.Properties;
import java.util.Set;

public class GetPropertyExample {
    public static void main(String[] args) {
        String osName = System.getProperty("os.name");
        String userName = System.getProperty("user.Name");
        String userHome = System.getProperty("user.Home");

        System.out.println("운영체제 이름: " + osName);
        System.out.println("사용자 이름: " + userName);
        System.out.println("사용자 홈디렉토리: " + userHome);

        System.out.println("---------------------------");
        System.out.println(" [ key ] value");
        System.out.println("-----------------------------");
        Properties props = System.getProperties(); //System.getProperties(): 모든 (키, 값) 쌍을 저장하고 있는 Properties 객체 리턴
        Set keys = props.keySet(); //properties 객체의 keySet메소드 쓰면 키만으로 구성된 Set객체 얻을 수 있다
        for(Object objKey : keys) {
            String key = (String) objKey;
            String value = System.getProperty(key);
            System.out.println("[ " + key + " ] " + value);
        }
    }
}
