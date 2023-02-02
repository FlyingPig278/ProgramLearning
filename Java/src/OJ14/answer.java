package OJ14;

import java.util.Scanner;

public class answer {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String input = in.nextLine();
        String c = "";
        if (input.indexOf("+") > 0) c = "+";
        if (input.indexOf("-") > 0) c = "-";
        if (input.indexOf("*") > 0) c = "*";
        if (input.indexOf("/") > 0) c = "/";
        int d = Integer.parseInt(input.substring(0, input.indexOf(c)));
        int e = Integer.parseInt(input.substring(input.indexOf(c) + 1));
        switch (c) {
            case "+":
                System.out.println(d + e);
                break;
            case "-":
                System.out.println(d - e);
                break;
            case "*":
                System.out.println(d * e);
                break;
            case "/":
                System.out.println(d / e);
                break;
        }
    }
}
