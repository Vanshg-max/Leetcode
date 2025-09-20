class Solution {
    public void rotate(int[][] arr) {
        int row_leng = arr.length;
        int col_leng = arr[0].length;

        // Transpose of matrix
        for(int i = 0; i < row_leng; i++){
            for (int j = i; j < col_leng; j++){
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
        // swap each row 
        for(int i = 0; i < row_leng; i++ ){
            for(int j =0; j < (col_leng/2); j++){
                int temp = arr[i][j];
                arr[i][j]= arr[i][col_leng-1-j];
                arr[i][col_leng-1-j] = temp;
            }
        }

        
    }
}