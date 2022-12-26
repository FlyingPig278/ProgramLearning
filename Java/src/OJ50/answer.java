package OJ50;

import java.util.Scanner;

public class answer{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int a=in.nextInt();
        int b=in.nextInt();
        int[] c=new int[a];
        for (int i = 0;i < a;i++){
            c[i]=i+1;
        }
        for (int i =2;i <=b;i++){
            get(c,i);
        }
        for (int e:c){
            if (e!=0) System.out.print(e+" ");
        }
    }
    public static void get(int[] c,int i){
        for (int j = 0;j <c.length;j++){
            if((j+1)%i==0){
                if (c[j]!=0) c[j]=0;
                else c[j]=j+1;
            }
        }
    }
}
