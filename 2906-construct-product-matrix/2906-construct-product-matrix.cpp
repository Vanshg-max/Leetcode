class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
       int n = grid.size();
       int m = grid[0].size();
       int Mod = 12345;

       vector<int> arr ; 

       for(int i = 0; i<n; i++){
        for(int j = 0;  j<m; j++){
            arr.push_back(grid[i][j]);
        }
       }
        int size = n*m;
       vector<long long > prefix(size,1);
       vector<long long> suffix(size,1);

       for(int i =1; i<size; i++){
        prefix[i] =( prefix[i-1] * arr[i-1]) % Mod ;
       }

         for(int i =size - 2; i>=0 ; i--){
        suffix[i] = (suffix[i+1] * arr[i+1]) % Mod;
       }
        int idx=0;
       for(int i =0 ; i< n; i++){
        for(int j =0; j < m; j++){
            grid[i][j] = (prefix[idx] * suffix[idx]) % Mod;
            idx++;
        }
       }
       
       return grid;

       
    }
};