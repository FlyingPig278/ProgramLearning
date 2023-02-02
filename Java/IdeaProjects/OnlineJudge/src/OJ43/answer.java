package OJ43;

import java.util.Scanner;

public class answer{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int a=in.nextInt(),b=in.nextInt(),c=in.nextInt();
        for (int i = 0;i <=100;i++){
            if (i % 3 == a && i % 5 == b && i % 7 == c) System.out.println(i);
        }
    }
}
