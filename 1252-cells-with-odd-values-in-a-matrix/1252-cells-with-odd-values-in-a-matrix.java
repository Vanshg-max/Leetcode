class Solution {
    public int oddCells(int m, int n, int[][] indices) {
    //    firstapproach
       int[][] ans = new int [m][n];
        for(int i =0 ; i < indices.length; i++){
            for( int j = 0; j < n ;j++){
                ans[indices[i][0]][j]++;
            }
            for(int k = 0; k < m ; k++){
                ans[k][indices[i][1]]++;
            }
        }
        int count=0;
       for(int i =0;i<m;i++ ){
        for(int j =0;j<n;j++){
            if((ans[i][j])%2 !=0  ){
                count++;
            }
        }

       }
        return count;
        
    }
}