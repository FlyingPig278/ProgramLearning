public class EightQueens {
    static int n = 8;  // 棋盘大小
    static boolean[] col = new boolean[n];  // 列
    static boolean[] dg = new boolean[2 * n - 1];  // 对角线
    static boolean[] udg = new boolean[2 * n - 1];  // 对角线
    static int[] queens = new int[n];  // 记录每一列皇后的位置

    static int cnt = 0;  // 记录合法的棋盘布局数

    static void dfs(int u) {
        if (u == n) {  // 如果已经放置了 n 个皇后，输出合法布局
            System.out.println("No. " + ++cnt);  // 输出编号
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (queens[i] == j) System.out.print("1 ");
                    else System.out.print("0 ");
                }
                System.out.println();
            }
            System.out.println();
            return;
        }

        // 逐列枚举可行的位置
        for (int i = 0; i < n; i++) {
            if (!col[i] && !dg[u + i] && !udg[u - i + n - 1]) {  // 如果不冲突
                queens[u] = i;  // 记录当前皇后的位置
                col[i] = dg[u + i] = udg[u - i + n - 1] = true;  // 标记不可用
                dfs(u + 1);  // 放置下一个皇后
                col[i] = dg[u + i] = udg[u - i + n - 1] = false;  // 回溯
            }
        }
    }

    public static void main(String[] args) {
        dfs(0);
    }
}
