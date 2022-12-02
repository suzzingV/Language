package sec7.exam03;

public class Tire {
    public int maxRotation;
    public int accumulationRotation;
    public String location;
    
    public Tire(String location, int maxRotation) {
        this.location = location;
        this.maxRotation = maxRotation;
    }

    public boolean roll() {
        ++accumulationRotation;
        if(accumulationRotation < maxRotation) {
            System.out.println(location + "Tire 수명: " + (maxRotation - accumulationRotation) + "회");
            return true;
        } else {
            System.out.println("*** " + location + "Trie 펑크 ***");
            return false;
        }
    }
}
