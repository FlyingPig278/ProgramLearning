package OJ15;

import java.util.Scanner;

class answer{
    public static void main(String[] args){
        Scanner in =new Scanner(System.in);
        double a=in.nextDouble();
        double b=in.nextDouble();
        double bmi=a/(b*b);
        if(bmi<18) System.out.println("too thin");
        else if(bmi<=25)System.out.println("very good");
        else if(bmi<30)System.out.println("overweight");
        else if(bmi<=35)System.out.println("fat");
        else if(bmi<=40)System.out.println("normal fat");
        else System.out.println("too fat");
    }
}