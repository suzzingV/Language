package exam02.sec04;

public class ClassCastException {
    public static void main (String[] args) {
        Dog dog = new Dog();
        changeDog(dog);

        Cat cat = new Cat();
        changeDog(cat);
    }

    public static void changeDog(Animal animal) { //하위 클래스 넣으면 자동으로 Animal로 타입 변환
        if(animal instanceof Dog) { //타입 변환 가능한지 확인 //원래 모습이 Dog면 타입 변환 가능 //예외처리 안하면 ClassCastException발생 가능
            Dog dog = (Dog) animal;
        }
    }
}

class Animal {}
class Dog extends Animal {}
class Cat extends Animal {}
