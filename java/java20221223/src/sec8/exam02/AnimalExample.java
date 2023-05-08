package sec8.exam02;

public class AnimalExample {
    public void animalSound(Animal animal) { //컴파일 무조건 static부터 실행되기 때문에 여기도 static 안 붙이면 에러뜸
        animal.sound();
    }
    public static void main(String[] args) {
        Dog dog = new Dog();
        Cat cat = new Cat();
        dog.sound();
        cat.sound();
        System.out.println("-----");

        //변수의 자동타입 변환
        Animal animal = null;
        animal = new Dog(); //부모클래스로 자동타입변환
        animal.sound(); //자동타입변환된 클래스는 오버라이딩 된 메소드 호출
        System.out.println(animal.kind); //자동타입변환돼도 필드는 적용됨
        animal = new Cat();
        animal.sound();
        System.out.println(animal.kind);
        
        //메소드의 다형성
        AnimalExample example = new AnimalExample();
        example.animalSound(new Dog());
        example.animalSound(new Cat());
    }
}
