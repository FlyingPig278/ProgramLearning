package OJ11;

import java.util.Scanner;

public class answer {
    public static void main(String[] args) {
        Scanner in =new Scanner(System.in);
        int a=in.nextInt();
        if (a>=90) System.out.println("A");
        else if (a>=80) System.out.println("B");
        else if (a>=60) System.out.println("C");
        else System.out.println("D");
    }
}
