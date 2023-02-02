package OJ385;

import java.util.Scanner;

public class answer{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int a=in.nextInt();
        int b=in.nextInt();
        if (a/10>0|b/20>0) System.out.println(1);
        else System.out.println(0);
    }
}
