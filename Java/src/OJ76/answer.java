package OJ76;

import java.math.BigInteger;
import java.util.Scanner;

public class answer{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        BigInteger a=in.nextBigInteger();
        BigInteger b=in.nextBigInteger();
        System.out.println(a.subtract(b));
    }
}
