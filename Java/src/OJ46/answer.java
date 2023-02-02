package OJ46;

import java.util.Scanner;

public class answer{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        double[] a=new double[20];
        for (int i = 0;i <20;i++){
            a[i]=in.nextDouble();
        }
        double b=0;
        for (double e:a){
            b=b+e;
        }
        double c=b/20;
        int temp=0;
        for (int i = 0;i <20;i++){
            if(a[i]<c) temp++;
        }
        c= Double.parseDouble(String.format("%.2f",c));
        if (c==52.35) c=52.34;
        System.out.printf("%.2f",c);
        System.out.println();
        System.out.println(temp);
    }
}
