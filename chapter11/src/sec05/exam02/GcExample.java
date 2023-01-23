package sec05.exam02;

import java.lang.System;

public class GcExample {
    public static void main(String[] args) {
        Employee emp;

        emp = new Employee(1); //정적 메소드에서 사용하려면 정적 클래스여야 함
        emp = null;
        emp = new Employee(2);
        emp = null;
        emp = new Employee(3);

        System.out.println("emp가 최종적으로 참조하는 사원번호: ");
        System.out.println(emp.eno);
        System.gc(); //쓰레기 수집기 실행
    }

    static class Employee {
        public int eno;

         public Employee(int eno) {
                this.eno = eno;
                System.out.println("Employee(" + eno + ")" + "가 메모리에 생성됨");
            }

        public void finalize() { //쓰레기 수집기가 객체 삭제하는지 확인
            System.out.println("Employee(" + eno + ")이 메모리에서 제거됨");
        }
    }
}
