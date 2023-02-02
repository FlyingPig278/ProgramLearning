package OJ19;

import java.util.Scanner;

public class answer{
    public static void main(String[] args){
        int in=new Scanner(System.in).nextInt();
        if (in>=0&&in%2==0) System.out.println(in*in);
        else if (in<0&&in%2==0) System.out.println(1-(in*in*in));
        else if (in%2==1) System.out.println(in-10);
        else if (in%2==-1) System.out.println(10-in);
    }
}
