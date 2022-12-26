package OJ39;

import java.util.Scanner;

public class answer{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int a=in.nextInt();
        int b=in.nextInt();
        for (int i = 0;i+1 <a;i++){
            b=(b+1)*2;
        }
        System.out.println(b);
    }
}
