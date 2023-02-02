package OJ68;

import java.util.Scanner;

public class answer{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        String a=in.nextLine();
        int temp=1;
        a=a.trim();
        int[] b=a.codePoints().toArray();
        for (int e:b){
            if(e==32) temp++;
        }
        System.out.println(temp);
    }
}
