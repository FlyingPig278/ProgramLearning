package OJ27;

import java.util.Scanner;

public class answer{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        Double a=in.nextDouble();
        Double b=in.nextDouble();
        System.out.printf("%.2f",a*Math.pow(1.005,b));
    }
}
