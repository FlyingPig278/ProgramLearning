package OJ1;

import java.math.BigInteger;
import java.util.Scanner;

public class answerBig{
    public static void main(String[] args){
        BigInteger a,b;
        Scanner in=new Scanner(System.in);
        a=in.nextBigInteger();
        b=in.nextBigInteger();
        System.out.println(a.add(b));
        System.out.println(a.subtract(b));
        System.out.println(a.multiply(b));
        System.out.println(a.divide(b));
    }
}
