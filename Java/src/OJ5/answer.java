package OJ5;

import java.util.Scanner;

public class answer {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt();
        int b = in.nextInt();
        int c = in.nextInt();
        a=a/3;
        b=(a+b)/3;
        c=(a+b+c)/3;
        a=a+b+c;
        b=b+c;
        System.out.println(a+" "+b+" "+c);

    }
}