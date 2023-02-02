package OJ16;

import java.util.Scanner;

public class answer {
    public static void main(String[] args) {
        int a, b, c;
        Scanner in = new Scanner(System.in);
        a = in.nextInt();
        b = in.nextInt();
        c = in.nextInt();
        if (!isTriangle(a, b, c)) System.out.println("impossible");
        else if (isTriangle(a, b, c) && isEquilateralTriangle(a, b, c)) System.out.println("equilateral triangle");
        else if (isTriangle(a, b, c) && isIsoscelesTriangle(a, b, c)) System.out.println("isosceles triangle");
        else System.out.println("normal triangle");
    }

    public static boolean isTriangle(int a,int b,int c){
        return ((a + b > c) && (a + c > b) && (b + c > a));
    }

    public static boolean isEquilateralTriangle (int a,int b,int c){
        return (a == b && b == c);
    }

    public static boolean isIsoscelesTriangle(int a,int b,int c){
        return (a==b|a==c|b==c);
    }
}
