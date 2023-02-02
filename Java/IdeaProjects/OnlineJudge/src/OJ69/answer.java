package OJ69;

import java.util.Scanner;

public class answer{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        String a=in.nextLine(),b=in.next();
        int c=a.indexOf(b)+1;
        if (c==0) c=-1;
        System.out.println(c);
    }
}
