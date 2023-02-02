package OJ49;

import java.util.Scanner;

public class answer{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt(),a=0,b=0,c=0;
        for (int i = 0;i <n ;i++){
            int temp=in.nextInt();
            if(temp==1) a++;
            else if (temp==2) b++;
            else c++;
        }
        if(a>b&&a>c) System.out.println("A");
        else if (b>a&b>c) System.out.println("B");
        else if (c>a&c>b) System.out.println("C");
        else System.out.println("NONE");
    }
}

