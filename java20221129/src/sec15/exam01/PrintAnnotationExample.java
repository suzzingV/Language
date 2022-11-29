package sec15.exam01;

import java.lang.reflect.Method;

public class PrintAnnotationExample {
    public static void main(String[] args) {
        Method[] declaredMethods = Service.class.getDeclaredMethods(); //Service클래스에 선언된 메소드 얻기(리플렉션)

        for(Method method : declaredMethods) {
            if(method.isAnnotationPresent(PrintAnnotation.class)) { //지정한 어노테이션이 적용되어 있는지 여부
                PrintAnnotation printAnnotation = method.getAnnotation(PrintAnnotation.class); //어노테이션 객체 얻기
                
                System.out.println("[" + method.getName() + "]");
                for(int i = 0; i < printAnnotation.number(); i++) {
                    System.out.print(printAnnotation.value());
                }
                System.out.println();

                try {
                    method.invoke(new Service()); //메소드 호출
                } catch (Exception e) {}
                System.out.println();
            }
        }
    }
}
