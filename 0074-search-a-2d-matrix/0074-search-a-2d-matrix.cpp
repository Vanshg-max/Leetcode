class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int rowIdx =-1;

        for(int i =0; i <n; i++){
           
            if(target <= matrix[i][m-1] ) {
                    rowIdx = i;
                    break;
            }
            
        }

        if( rowIdx == -1){
            return false;
        }

        for(int j=0; j<m; j++){
           
            if(matrix[rowIdx][j] == target){
                return true;
            }
        }
        return false;
        
    }
};