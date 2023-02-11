package sec06.exam03;

public class NewInstanceExample {
    public static void main(String[] args) {
        try {
            Class clazz = Class.forName("sec06.exam03.ReceiveAction"); //동적으로 객체 생성
            //코드 작성시에 클래스이름 결정할 수 없고 런타임 시에 클래스 이름이 정해지는 경우 유용하게 사용됨
            //Class clazz = Class.forName("sec06.exam03.SendAction");

            Action action = (Action) clazz.newInstance(); 
            //Class객체.newInstance(): Object타입의 객체 얻음
            //기본생성자 호출해서 객체생성 -> 반드시 클래스에 기본 생성자 존재해야 함
            //매개변수 있는 생성자 호출하고 싶으면 리플렉션으로 Constructor 객체 얻어 newInstance() 메소드 호출
            action.execute();
        } catch (ClassNotFoundException e) {
            e.printStackTrace();
        } catch (InstantiationException e) {
            e.printStackTrace();
        } catch (IllegalAccessException e) {
            e.printStackTrace();
        }
    }
}
