package OJ36;

import java.util.Scanner;

public class answerV2{
    public static void main(String[] args) {
        System.out.println(get(new Scanner(System.in).nextInt()));
    }

    public static int get(int a){
        double SqrtFive=Math.sqrt(5);
        if (a<=2) return 1;
        else return (int)((1.0/SqrtFive)*(Math.pow(((1+SqrtFive)/2),a)-(Math.pow(((1-SqrtFive)/2),a))));

    }
}
