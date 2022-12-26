package OJ23;

import java.util.Scanner;

public class answer{
    public static void main(String[] args){
        int n=new Scanner(System.in).nextInt();
        int s=0;
        for (int i=0;i<=n;i++){
            s= (int)(s+Math.pow(i,2));
        }
        System.out.println(s);
    }
}
