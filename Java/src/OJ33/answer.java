package OJ33;

import java.util.Scanner;

public class answer{
    public static void main(String[] args){
        int in=new Scanner(System.in).nextInt();
        for (int i = 0;i <in;i++){
            for (int j = 0;j <=i;j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
