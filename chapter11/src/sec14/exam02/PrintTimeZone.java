package sec14.exam02;

import java.util.Calendar;
import java.util.TimeZone;

public class PrintTimeZone {
    public static void main(String[] args) {
        String[] availableIDs = TimeZone.getAvailableIDs(); //TimeZone.getAvailableIDs(): String 배열, 사용 가능한 시간대
        for(String id : availableIDs) {
            System.out.println(id);
        }

        TimeZone timeZone = TimeZone.getTimeZone("Canada/Pacific");
        Calendar now = Calendar.getInstance(timeZone);
    }
}
