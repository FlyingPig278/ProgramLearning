package OJ32;

import java.util.Scanner;

public class answer{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt(),X=0,T=0;
        for (int i = 0;i <n ;i++){
            if(in.nextInt()==0) T++;
            else X++;
        }
        if(T>X) System.out.println("T win");
        else if (T==X) System.out.println("invalid");
        else System.out.println("X win");
    }
}
