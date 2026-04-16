class Solution {
public:
    void transpose(vector<vector<int>>& matrix){
        int row = matrix.size();
        for(int i=0; i<row; i++){
            for(int j=i; j<row; j++ ){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }

    void rev(vector<vector<int>> &matrix){
        int row = matrix.size();
        int col = matrix[0].size();
        
        for(int i=0; i<row; i++){
            int low = 0;
            int high = row-1;

            while(low<=high){
                swap(matrix[i][low],matrix[i][high]);
                low++;
                high--;
            }
        }

    }
    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        rev(matrix);
        
    }
};