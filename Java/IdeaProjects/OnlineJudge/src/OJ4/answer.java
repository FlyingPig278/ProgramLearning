package OJ4;

import java.util.Scanner;

public class answer {
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int a=in.nextInt();
        System.out.println(a/3600+" "+a%3600/60+" "+a%3600%60);
    }
}
