package OJ37;

import java.util.ArrayList;
import java.util.Scanner;

public class answer{
    public static void main(String[] args){
        int temp=0;
        int in = new Scanner(System.in).nextInt();
        ArrayList<Integer> a= new ArrayList<>();
        for (int i = 1;i <= in;i++){
            a.add(i);
        }
        for (int e:a){
            for (int j = 0;j < (e + "").length();j++){
                if (((e + "").charAt(j)) == '7'){
                    temp++;
                }
            }
        }
        System.out.println(temp);
    }
}