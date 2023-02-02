package OJ34;

import java.util.Scanner;

public class answer{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int a=in.nextInt();
        int b=in.nextInt();
        int t=(b-(a*2))/2;
        int j=a-t;
        System.out.println(j+" "+t);
    }
}
