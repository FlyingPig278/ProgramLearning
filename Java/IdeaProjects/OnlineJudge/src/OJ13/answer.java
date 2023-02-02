package OJ13;

import java.util.Scanner;

class answer{
    public static void main(String[] args){
        Scanner in =new Scanner(System.in);
        int a=in.nextInt();
        if(a<=3) System.out.println("8");
        else System.out.println(8+(a-3)*2);
    }
}