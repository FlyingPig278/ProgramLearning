package OJ45;

import java.util.ArrayList;
import java.util.Scanner;

public class answer{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int[] a=new int[in.nextInt()];
        for (int i = 0;i <a.length;i++){
            a[i]=i+1;
        }
        ArrayList<Integer> b=new ArrayList<>();
        for (int e:a){
            int c=(e+"").length();
            for (int i = 0;i <c;i++){
                b.add(Integer.parseInt(String.valueOf((e + "").charAt(i))));
            }
        }
        int temp=0;
        for (int e:b){
            temp=temp+e;
        }
        System.out.println(temp);
    }
}
