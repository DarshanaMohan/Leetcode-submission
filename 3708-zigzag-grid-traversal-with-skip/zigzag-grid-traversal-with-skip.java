
class Solution {
    public List<Integer> zigzagTraversal(int[][] grid) {
        List<Integer> result = new ArrayList<>();
        int m = grid.length;
        int n = grid[0].length;

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                int col = (i % 2 == 0) ? j : (n - 1 - j);
                if ((i + col) % 2 == 0) {
                    result.add(grid[i][col]);
                }
            }
        }

        return result;
    }
}
