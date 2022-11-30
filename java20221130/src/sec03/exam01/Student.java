package sec03.exam01;

public class Student extends People {
    public int studentNo;

    public Student(String name, String ssn, int studentNo) {
        super(name, ssn); //부모클래스에 기본 생성자 없고 매개값 있는 생성자만 있으므로 이렇게 호출해야함
        this.studentNo = studentNo;
    }
}
