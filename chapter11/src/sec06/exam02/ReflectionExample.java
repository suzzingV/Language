package sec06.exam02;

import sec03.exam04.깊은복제.*;
import java.lang.reflect.*;

public class ReflectionExample {
    public static void main(String[] args) {
        try{
        Class clazz = Class.forName("sec03.exam04.깊은복제.Car");
        
        System.out.println("[클래스 이름]");
        System.out.println(clazz.getName());
        System.out.println();

        System.out.println("[생성자 정보]");
        Constructor[] constructors = clazz.getDeclaredConstructors(); //클래스에 선언된 생성자 배열
        //상속된 멤버는 가져오지 않음 상속된 멤버 볼라면 getFields(), getMethod(): public 멤버만 가져옴
        for(Constructor constructor : constructors) {
            System.out.print(constructor.getName() + "(");
            Class[] parameters = constructor.getParameterTypes(); //getParameterTypes: 생성자의 매개변수 타입 배열
            PrintParameters(parameters);
            System.out.println(")");
        }
        System.out.println();

        System.out.println("[필드 정보]");
        Field[] fields = clazz.getDeclaredFields();
        for(Field field : fields) {
            System.out.println(field.getType().getName() + " " + field.getName()); //getType().getName(): 타입의 이름얻기
        }
        System.out.println();

        System.out.println("[메소드 정보]");
        Method[] methods = clazz.getDeclaredMethods();
        for(Method method : methods) {
            System.out.print(method.getName() + "(");
            Class[] parameters = method.getParameterTypes();
            PrintParameters(parameters);
            System.out.print(")");
        }
    } catch(ClassNotFoundException e) {
        e.printStackTrace();
    }
    }

    public static void PrintParameters(Class[] parameters) {
        for(int i = 0; i < parameters.length; i++) {
            System.out.print(parameters[i].getName());
            if(i < parameters.length - 1) {
                System.out.print(",");
            }
        }
    }
}
