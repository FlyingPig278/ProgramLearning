package OJ42;

import java.util.Scanner;

public class answer {
    public static void main(String[] args) {
        System.out.println(get(new Scanner(System.in).nextInt()));
    }
    public static int get(int a){
        if (a<=1) return 1;
        else if(a==2) return 2;
        else return get(a-3)+get(a-2)+get(a-1);
    }
}
