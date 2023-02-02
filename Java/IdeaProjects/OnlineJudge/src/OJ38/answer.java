package OJ38;

public class answer{
    public static void main(String[] args){
        int in=new java.util.Scanner(System.in).nextInt();
        int temp=0;
        for (int i = 0;i<=in/10;i++){
            int delta=in-10*i;
            for (int j = 0;j<=delta/5;j++){
                temp++;
            }
        }
        System.out.println(temp);
    }
}
