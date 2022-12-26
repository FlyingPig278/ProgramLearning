package OJ54;

import java.util.Scanner;

public class answer{
    public static void main(String[] args){
        int n=new Scanner(System.in).nextInt();
        for (int j=1;j <= n;j++){
            if (j % 2 == 1 && j != 1){
                for (int i=n*(j-1) + 1;i <= j * n;i++){
                    System.out.print(i + " ");
                }
            }
            else if (j == 1){
                for (int i=1;i <= n;i++){
                    System.out.print(i + " ");
                }
            }
            else {
                for (int i=j * n;i > (j-1)*n;i--){
                    System.out.print(i + " ");
                }
            }
            System.out.println();
        }
    }
}
