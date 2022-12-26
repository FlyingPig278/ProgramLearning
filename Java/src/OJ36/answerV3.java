package OJ36;

import java.util.Scanner;

public class answerV3{
    public static void main(String[] args){
        int k,i,a1,a2,a3;
        a1=1;a2=1;
        k=new Scanner(System.in).nextInt();
        if(k>=3)
            for(i=3;i<=k;i++){
                a3=a1+a2;
                a1=a2;
                a2=a3;
            }
        System.out.println(a2);
    }
}