package sec04.exam01;

import java.util.Objects;
import java.util.Comparator;

public class CompareExample {
    public static void main(String[] args) {
        Student s1 = new Student(1);
        Student s2 = new Student(1);
        Student s3 = new Student(2);

        int result = Objects.compare(s1, s2, new StudentComparator());
        //Objects에 compare 메소드 있는데 그 메소드는 세번째 인자의 인터페이스의 compare 메소드를 이용해 객체 둘을 비교하는 메소드
        //인터페이스에는 제네릭 인터페이스 타입으로 두 객체를 비교하는 compare(T a, T b) 메소드 정의되어 있다.
        //같으면 0, 앞에게 뒤에게보다 작으면 음수, 크면 양수
        System.out.println(result);
        result = Objects.compare(s1, s3, new StudentComparator());
        System.out.println(result);
    }

    static class Student {
        int sno;
        Student(int sno) {
            this.sno = sno;
        }
    }

    static class StudentComparator implements Comparator<Student> {
        @Override
        public int compare(Student o1, Student o2) {
            return Integer.compare(o1.sno, o2.sno);
        }
    }
}
