package OJ20;

import java.util.Scanner;

public class answer{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int m=in.nextInt();
        int n=in.nextInt();
        for (int i = m;i<n;i++){
            System.out.print(i+" ");
        }
        System.out.print(n);
    }
}
