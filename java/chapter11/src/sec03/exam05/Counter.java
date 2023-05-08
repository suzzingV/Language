package sec03.exam05;

public class Counter {
    public int no;

    public Counter(int no) {
        this.no = no;
    }

    @Override
    protected void finalize() throws Throwable {
        System.out.println(no + "번 객체의 finalize()가 실행됨");
    }
    //참조하지 않는 배열이나 객체 쓰레기수집가가 힙 영역에서 자동적으로소멸시킴
    //객체 소멸하기 직전에 마지막으로 객체의 소멸자(finalize()) 실행
    //기본적으로 실행 내용 없음
    //객체 소멸되기 전에 마지막으로 사용했던 자원을 닫고 싶거나 중요한 데이터 저장하고 싶으면 finalize재정의 가능
}
