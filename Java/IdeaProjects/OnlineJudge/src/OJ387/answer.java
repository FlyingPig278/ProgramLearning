package OJ387;

import java.util.ArrayList;
import java.util.Scanner;

public class answer{
    public static void main(String[] args){
        int a=new Scanner(System.in).nextInt();
        ArrayList<Integer> b=new ArrayList<>();
        if (a%3==0)b.add(3);
        if (a%5==0)b.add(5);
        if (a%7==0)b.add(7);
        if (b.size()!=0) for (int e:b){
            System.out.print(e+" ");
        }
        else System.out.println("n");
    }
}