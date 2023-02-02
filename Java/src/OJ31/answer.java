package OJ31;

import java.util.Scanner;

public class answer{
    public static void main(String[] args){
        int in=new Scanner(System.in).nextInt();
        for (int i = 0;i <=in;i++){
            if(i!=0&&(i%4==0|i%6==0)) System.out.print(i+" ");
        }
    }
}
