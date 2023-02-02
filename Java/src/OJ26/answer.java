package OJ26;

import java.util.Scanner;

public class answer{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        double a=in.nextDouble();
        double b=in.nextDouble();
        int c=0;
        while(a<=b){
            c++;
            a=a*1.005;
        }
        System.out.println(c);
    }
}
