package sec05.exam04;

import java.util.*;

public class ComparableExample {
    public static void main(String[] args) {
        TreeSet<Person> treeSet = new TreeSet<Person>();

        treeSet.add(new Person("ȫ�浿", 45));
        treeSet.add(new Person("���ڹ�", 25));
        treeSet.add(new Person("������", 31));

        Iterator<Person> iterator = treeSet.iterator();
        while(iterator.hasNext()) {
            Person person = iterator.next();
            System.out.println(person.name + ":" + person.age);
        }
    }
}
