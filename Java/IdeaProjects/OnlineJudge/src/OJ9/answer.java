package OJ9;

import java.util.Scanner;
import static sun.swing.MenuItemLayoutHelper.max;

public class answer {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int a=in.nextInt();
        int b=in.nextInt();
        int c=in.nextInt();
        System.out.println(max(a,b,c));
    }
}
