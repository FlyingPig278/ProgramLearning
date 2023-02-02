package OJ1535;

import java.util.Scanner;

public class answer {
    public static void main(String[] args) {
        System.out.println(get(new Scanner(System.in).nextInt()));
    }
    public static int get(int a){
        if (a<=1) return 1;
        else return get(a-2)+get(a-1);
    }
}
