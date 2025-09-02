class Solution {
    public int oddCells(int m, int n, int[][] indices) {
        // creating array to track row and column incremented
        int[] rowCount = new int [m];
        int[] colCount = new int [n];

        for(int[] ind : indices){
            rowCount[ind[0]]++;
            colCount[ind[1]]++;
        }
       int count = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if ((rowCount[i] + colCount[j]) % 2 != 0) {
                    count++;
                }
            }
        }

        return count;


        
    }
}