package OJ35;

import java.util.Scanner;

public class answer{
    public static void main(String[] args){
        int in=new Scanner(System.in).nextInt();
        for (int i = 1;i <= in;i++){
                if (in%i==0&&isPrime(i)) System.out.print(i+" ");
        }
    }
    public static boolean isPrime(int a){
        int temp=0;
        for (int i = 2;i <a;i++){
            if(a%i==0)temp++;
        }
        if (a==1) return false;
        else return temp==0;
    }
}
