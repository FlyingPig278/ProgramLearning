package OJ393;

import java.util.Scanner;

public class answer{
    public static void main(String[] args){
        int a, b, c;
        Scanner in=new Scanner(System.in);
        a=in.nextInt();
        b=in.nextInt();
        c=in.nextInt();
        if ((a + b > c) && (a + c > b) && (b + c > a)) System.out.println("yes");
        else System.out.println("no");
    }
}