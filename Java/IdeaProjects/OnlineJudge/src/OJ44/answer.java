package OJ44;

import java.util.Arrays;
import java.util.Scanner;

public class answer{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int n=in.nextInt();
        int[] stu=new int[n+1];
        for (int i = 0;i <n;i++){
            stu[i]=in.nextInt();
        }
        int gr=in.nextInt();
        stu[n]=gr;
        Arrays.sort(stu);
        int a=Arrays.binarySearch(stu,gr);
        int b=Arrays.binarySearch(stu,a,n,gr);
        if (a==b) a--;
        System.out.println(n-a);
    }
}
