package OJ9;

import java.util.Scanner;

public class answer {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int a=in.nextInt();
        int b=in.nextInt();
        int c=in.nextInt();
        System.out.println(Math.max(Math.max(a,b),c));
    }
}
