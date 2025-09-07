class Solution {
    public List<Integer> luckyNumbers(int[][] matrix) {
     
     int row = matrix.length;
     int col = matrix[0].length;

    int maxMinRow = Integer.MIN_VALUE;
     for( int i = 0; i < row; i++ ){
        int minValue = matrix[i][0];
        for(int j = 0; j< col; j++ ){
            minValue = Math.min(minValue,matrix[i][j]);

        }
        maxMinRow = Math.max(maxMinRow,minValue);

     }
     ArrayList<Integer> luckynumber = new ArrayList<>();

     for(int i = 0; i < col; i++ ){
          int maxValue = matrix[0][i];
        for(int j = 0; j < row; j++){
            maxValue = Math.max(maxValue,matrix[j][i]);
        }
        if(maxValue == maxMinRow){
            luckynumber.add(maxValue);
        }
     }
        
        return luckynumber;

        
    }
}