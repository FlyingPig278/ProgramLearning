package OJ84;

import java.util.Scanner;

public class answer{
    public static void main(String[] args){
        int a=new Scanner(System.in).nextInt();
        int b=0;
        for (int i=0;i <(a+"").length();i++){
            b=b+Integer.parseInt(String.valueOf((a+"").charAt(i)));
        }
        System.out.println(b);
    }
}
