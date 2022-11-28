public class Singleton {
    private static Singleton singleton  = new Singleton(); //정적 필드
    
    private Singleton() {}; //생성자

    static Singleton getInstance() { //외부에서 호출가능
        return singleton; //객체 리턴
    }
}
