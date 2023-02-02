package OJ30;

import java.util.Arrays;
import java.util.Scanner;

public class answer{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int[] a=new int[10];
        for (int e=0;e<10;e++){
            a[e]=in.nextInt();
        }
        Arrays.sort(a);
        System.out.println(a[9]);
    }
}
