class Solution {
    public int[][] generateMatrix(int n) {
        int[][] matrix = new int[n][n];

        // Same as Sprial matrix question
        int top  = 0;
        int bottom = matrix.length-1;
        int left = 0;
        int right = matrix[0].length-1;
        
        int num  = 1;

        while( top <= bottom && left <= right){

            // traverse in top row i.e left to right
            for(int i = left; i <= right; i++){
                matrix[top][i] = num++;
            }
            top++;
            // traverse in last column from top to bottom
            for(int i = top; i <= bottom ; i++){
                matrix[i][bottom] = num++;
            }
            right--;
            // now right to left
            if(top<=bottom){
            for(int i = right; i >= left; i--){
                matrix[bottom][i] = num++;
            }
            bottom--;
            }
            // now bottom to top
            if(left<=right){
            for(int i = bottom; i >= top; i--){
                matrix[i][left] = num++;
            }
            left++;

            }
        }
        return matrix;



        
    }
}