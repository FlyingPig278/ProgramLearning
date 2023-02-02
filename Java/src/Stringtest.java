import java.util.Arrays;

public class Stringtest{
    public static void main(String[] args){
        /*String a="123";
        String b=a;
        b=a.substring(0,1);
        System.out.println(a+" "+b);*/
        Double c=1.23456789;
        int[] e= (c+"").codePoints().toArray();
        for (int i = 0;i <e.length;i++){
            e[i]=Integer.parseInt(String.valueOf(e[i]));
        }
        System.out.println(Arrays.toString(e));
    }
}
