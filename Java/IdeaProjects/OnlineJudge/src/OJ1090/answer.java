package OJ1090;

import java.util.Arrays;
import java.util.Scanner;

public class answer {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String word = in.next();
        int Length = word.length();
        String[] a = new String[Length];
        for (int i = 0; i < Length; i++) {
            a[i] = String.valueOf(word.charAt(i));
        }
        int[] Times=new int[Length];
        for (int i = 0; i < Length; i++) {
            String n = a[i];
            int b=0;
            for (String e : a) {
                if (n.equals(e)) {
                    b++;
                }
            }
            Times[i]=b;
        }
        Arrays.sort(Times);
        int min=Times[0];
        int max =Times[Length-1];
        int delta=max-min;
        int temp=0;
        for(int i=1;i<delta;i++){
            if(delta%i==0) temp++;
        }
        String Line1;
        if(temp==1) {
            Line1="Lucky Word";
        }
        else {
            Line1="No Answer";
            delta=0;
        }
        System.out.println(Line1);
        System.out.println(delta);
    }
}