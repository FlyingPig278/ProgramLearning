package OJ75;

import java.math.BigDecimal;
import java.math.BigInteger;
import java.util.Scanner;

public class answer{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        BigDecimal a=in.nextBigDecimal();
        BigDecimal b=in.nextBigDecimal();
        BigDecimal c=a.add(b);
        String d=String.valueOf(c);
        String e=d.substring(d.indexOf(".")+1);
        BigInteger f=new BigInteger(e);
        if (f.equals(BigInteger.ZERO)) d=d.substring(0,d.indexOf("."));
        System.out.println(d);
    }
}
