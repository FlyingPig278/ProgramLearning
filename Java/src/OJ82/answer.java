package OJ82;

import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.util.Scanner;

public class answer{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        LocalDate a=(LocalDate.of(in.nextInt(),in.nextInt(),in.nextInt())).plusDays(in.nextInt());
        System.out.println(a.format(DateTimeFormatter.ofPattern("uuuu M d")));
    }
}
