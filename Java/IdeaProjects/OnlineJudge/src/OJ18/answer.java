package OJ18;

import java.util.Scanner;
import static java.lang.Math.pow;

public class answer{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int num=in.nextInt();
        int a=num/100;
        int b=num/10%10;
        int c=num%10;
        if (pow(a,3)+pow(b,3)+pow(c,3)==num) System.out.println("yes");
        else System.out.println("no");
    }
}
