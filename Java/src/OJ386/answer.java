package OJ386;

import java.util.Scanner;

public class answer{
    public static void main(String[] args){
        int a=new Scanner(System.in).nextInt();
        if (a%3==0&a%5==0)System.out.println("YES");
        else System.out.println("NO");
    }
}
