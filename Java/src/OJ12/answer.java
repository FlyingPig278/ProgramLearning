package OJ12;

import java.util.Scanner;

public class answer{
    public static void main(String[] args){
        Scanner in =new Scanner(System.in);
        int a=in.nextInt();
        if ((a%4==0&&a%100!=0)|(a%400==0)) System.out.println("leap year");
        else System.out.println("normal year");
    }
}
