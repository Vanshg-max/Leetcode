class Solution {
    public int[][] matrixReshape(int[][] mat, int r, int c) {
       int row = mat.length;
       int col = mat[0].length;

        int[][] arr = new int [r][c];
       if( row * col != r * c) return mat;
       int i = 0; //row for new mat
       int j = 0; //col for new mat
       int k = 0; //row for old mat
       int l = 0; //row for old mat


        for(i =0 ; i < r ;i++ ){
            for(j = 0; j < c; j++){
            arr[i][j]= mat[k][l];
            l++;
            if(l == col){
                k++;
                l =0;
            }
            }
        }
        return arr;
    }
}