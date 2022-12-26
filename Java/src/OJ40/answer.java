package OJ40;

import java.util.Scanner;

public class answer{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int[] num=new int[10];
        for(int i=0;i<10;i++){
            num[i]=in.nextInt();
        }
        for (int i = 0;i <10;i++){
            if (num[i]%2==1) System.out.print(num[i]+" ");
        }
        System.out.println();
        for (int i = 0;i <10;i++){
            if (num[i]%2==0) System.out.print(num[i]+" ");
        }
    }
}
