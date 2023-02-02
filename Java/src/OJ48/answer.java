package OJ48;

import java.util.Scanner;

public class answer{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int[] a=new int[20];
        for (int i = 0;i < 20;i++){
            a[i]=in.nextInt();
        }
        int temp=0;
        int num=0;
        for (int i = 0;i < 20;i++){
            if (sum(i,a)>temp){temp=sum(i,a);num=i+1;}
        }
        System.out.println(temp);
        System.out.println(num);
    }
    public static int sum(int i,int[] j){
        if (i + 3 <= j.length - 1) return j[i] + j[i + 1] + j[i + 2] + j[i + 3];
        else if (i + 3 == j.length) return j[0] + j[i] + j[i + 1] + j[i + 2];
        else if (i + 3 == j.length+1) return j[0] + j[1] + j[i] + j[i + 1];
        else if (i + 3 == j.length+2) return j[0] + j[1] + j[2] + j[i];
        else return 0;
    }
}
