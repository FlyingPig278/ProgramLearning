package OJ388;

import java.util.Scanner;

public class answer{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int a=in.nextInt();
        int b=in.nextInt();
        if ((a<60|b<60)&!(a<60&b<60))System.out.println(1);
        else System.out.println(0);
    }
}
