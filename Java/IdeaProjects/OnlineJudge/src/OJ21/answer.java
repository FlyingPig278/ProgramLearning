package OJ21;

import java.util.Scanner;

public class answer{
    public static void main(String[] args){
        int in=new Scanner(System.in).nextInt();
        double a=0;
        for (int i=1;i<=in;i++){
            a=a+(1.00/i);
        }
        System.out.printf("%.2f",a);
    }
}
