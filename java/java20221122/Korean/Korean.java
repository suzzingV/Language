package Korean;

public class Korean {
    String nation = "대한민국";
    String name;
    String ssn;

    public Korean(String n, String s) { //name, ssn으로 할 때 매개변수가 우선순위 높음
        name = n;  //this.name(필드) = name(매개변수);
        ssn = s; //this.ssn = ssn;
    }
}
