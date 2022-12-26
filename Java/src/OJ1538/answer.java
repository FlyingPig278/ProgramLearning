package OJ1538;

import java.util.Scanner;

public class answer{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        final int M = in.nextInt();
        final int N = in.nextInt();
        in.nextLine();
        String command = in.nextLine();
        int Length = command.length();
        String[][] map = new String[M][N];
        for (int i = 0;i < M;i++){
            String line = in.nextLine();
            for (int j = 0;j < N;j++){
                map[i][j] = String.valueOf(line.charAt(j));
            }
        }
        Robot robot = new Robot(M,N,map);
        for (int i = 0;i < Length;i++){
            String Do = String.valueOf(command.charAt(i));
            switch (Do){
                case "F":
                    robot.Forward();
                    break;
                case "B":
                    robot.Back();
                    break;
                case "L":
                    robot.Left();
                    break;
                case "R":
                    robot.Right();
                    break;
            }
        }
        System.out.println(robot.getResult());
    }

    static class Robot{
        private final String[][] map;
        private String direction = "n";
        private final int M;
        private final int N;
        private int I = 0, J = 0;

        public Robot(int M,int N,String[][] map){
            this.M = M;
            this.N = N;
            this.map = map;
        }

        public void Left(){
            switch (direction){
                case "n":
                    direction = "w";
                    break;
                case "w":
                    direction = "s";
                    break;
                case "s":
                    direction = "e";
                    break;
                case "e":
                    direction = "n";
                    break;
            }
        }

        public void Right(){
            Left();
            Left();
            Left();
        }

        public String getResult(){
            for (int i = 0;i < M;i++){
                for (int j = 0;j < N;j++){
                    if (isS(map[i][j])){
                        I = i + 1;
                        J = j + 1;
                    }
                }
            }
            return I + " " + J + " " + direction;
        }

        public static boolean isS(String s){
            return (s.equals("S"));
        }

        public void Forward(){
            done:
            for (int i = 0;i < M;i++){
                for (int j = 0;j < N;j++){
                    if (isS(map[i][j])){
                        switch (direction){
                            case "w":
                                if (j > 0 && map[i][j - 1].equals(".")){
                                    map[i][j - 1] = "S";
                                    map[i][j] = ".";
                                    break done;
                                }
                                break;
                            case "n":
                                if (i > 0 && map[i - 1][j].equals(".")){
                                    map[i - 1][j] = "S";
                                    map[i][j] = ".";
                                    break done;
                                }
                                break;
                            case "e":
                                if (j < (N - 1) && map[i][j + 1].equals(".")){
                                    map[i][j + 1] = "S";
                                    map[i][j] = ".";
                                    break done;
                                }
                                break;
                            case "s":
                                if (i < (M - 1) && map[i + 1][j].equals(".")){
                                    map[i + 1][j] = "S";
                                    map[i][j] = ".";
                                    break done;
                                }
                                break;
                        }
                    }
                }
            }
        }

        public void Back(){
            done:
            for (int i = 0;i < M;i++){
                for (int j = 0;j < N;j++){
                    if (isS(map[i][j])){
                        switch (direction){
                            case "e":
                                if (j > 0 && map[i][j - 1].equals(".")){
                                    map[i][j - 1] = "S";
                                    map[i][j] = ".";
                                    break done;
                                }
                                break;
                            case "s":
                                if (i > 0 && map[i - 1][j].equals(".")){
                                    map[i - 1][j] = "S";
                                    map[i][j] = ".";
                                    break done;
                                }
                                break;
                            case "w":
                                if (j < (N - 1) && map[i][j + 1].equals(".")){
                                    map[i][j + 1] = "S";
                                    map[i][j] = ".";
                                    break done;
                                }
                                break;
                            case "n":
                                if (i < (M - 1) && map[i + 1][j].equals(".")){
                                    map[i + 1][j] = "S";
                                    map[i][j] = ".";
                                    break done;
                                }
                                break;
                        }
                    }
                }
            }
        }
    }
}



