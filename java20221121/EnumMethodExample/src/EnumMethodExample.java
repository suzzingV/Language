
public class EnumMethodExample {
    public static void main(String[] args) {
        Week today = Week.SUNDAY;
        String name = today.name(); //열거 객체가 가지고 있는 문자열 리턴
        System.out.println(name);

        int ordinal = today.ordinal(); //열거 객체의 순번(0번부터 시작)
        System.out.println(ordinal);

        Week day1 = Week.MONDAY;
        Week day2 = Week.WEDNESDAY;
        int result1 = day1.compareTo(day2); //day2를 기준으로 day1과의 차이
        int result2 = day2.compareTo(day1);
        System.out.println(result1);
        System.out.println(result2);

        if(args.length == 1) {
            String strDay = args[0];
            Week weekDay = Week.valueOf(strDay); //동일한 문자열 갖는 열거객체 리턴
            if(weekDay == Week.SATURDAY || weekDay == Week.SUNDAY) {
                System.out.println("주말 이군요");
            } else {
                System.out.println("평일 이군요");
            }
        }

        Week[] days = Week.values(); //열거타입의 모든 열거객체들을 배열로 만들어 리턴
        for(Week day: days) {
            System.out.println(day);
        }
    }
}