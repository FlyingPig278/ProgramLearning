package OJ17;

import java.util.Scanner;

public class answer{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int a=in.nextInt();
        int b=in.nextInt();
        int c=in.nextInt();
        int delta=(b*b)-(4*a*c);
        if (a==0) System.out.println("one answer");
        else if (delta>0) System.out.println("two answers");
        else if (delta==0) System.out.println("two equal answers");
        else System.out.println("no answer");
    }
}
