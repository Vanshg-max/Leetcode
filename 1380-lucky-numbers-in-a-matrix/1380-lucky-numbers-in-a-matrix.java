class Solution {
    public List<Integer> luckyNumbers(int[][] matrix) {
        ArrayList<Integer> rowMinlist = new ArrayList<>();
        // first find min vakueof each row store in row min list;
        for(int i = 0; i < matrix.length;i++){
            int rowMin = Integer.MAX_VALUE;
            for(int j = 0; j < matrix[i].length; j++){
                   rowMin = Math.min(rowMin,matrix[i][j]);
            }
            rowMinlist.add(rowMin);
        }

        // now sotring max element of each column in colMaxlist
         ArrayList<Integer> colMaxlist = new ArrayList<>();
         for(int i = 0; i < matrix[0].length; i++){
            int colMax = Integer.MIN_VALUE;
            for(int j = 0;j < matrix.length ; j++){
                colMax = Math.max(colMax,matrix[j][i]);
                
            }
            colMaxlist.add(colMax);
         }

        //  now checking lucky number 
        ArrayList<Integer> luckyNumber = new ArrayList<>();

        for(int num : rowMinlist){
            if(colMaxlist.contains(num)){
                luckyNumber.add(num);
            }
        }
        return luckyNumber;

        
    }
}