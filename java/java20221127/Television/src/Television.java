public class Television {
    static String company = "Samsung";
    static String model = "LCD";
    static String info;

    static { //정적 블록 //정적 필드는 생성자에서 초기화 할 수 없으므로 여기서 초기화해야한다 생성자는 객체 생성시에만 실행되기 때문
        //클래스가 메모리로 로딩될 때 자동으로 실행
        //클래스 내부에 여러개 선언되어도 상관 없고, 선언된 순서대로 실행된다
        info = company + "-" + model;
    }
}
