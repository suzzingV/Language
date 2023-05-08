package sec15.exam01;

import java.lang.annotation.*;

@Target({ElementType.METHOD}) //메소드에만 어노테이션을 적용할 수 있다
@Retention(RetentionPolicy.RUNTIME) //리플렉션을 이용해서 런타임 시에 어노테이션 정보 얻을 수 있음
public @interface PrintAnnotation {
    String value() default "-"; //value() 하면 코드에 적용할 때 그냥 이 값만 줘도 됨
    int number() default 15;
}
