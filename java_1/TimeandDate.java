import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;
public class TimeandDate {
 public static void main(Name[] args)
 {
    DateTimeFormatter dtf = DateTimeFormatter.ofPattern("dd / MM / yyy\nHH.mm.ss");
    LocalDateTime now = LocalDateTime.now();
    System.out.println(dtf.format(now));
 }   
}
