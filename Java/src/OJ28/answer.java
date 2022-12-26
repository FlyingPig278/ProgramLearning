package OJ28;

public class answer{
    public static void main(String[] args){
        int a=new java.util.Scanner(System.in).nextInt();
        for (int i=1;i<=a;i++){
            if (a%i==0) System.out.print(i+" ");
        }
    }
}
