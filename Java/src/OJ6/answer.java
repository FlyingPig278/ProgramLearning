package OJ6;

import java.util.Scanner;

public class answer {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int a = 0;
        for(int i=n;i>=5;i--){
            int b = i;
            while(b%5==0){
                a++;
                b=b/5;
            }
        }
        System.out.println(a);
    }
}
