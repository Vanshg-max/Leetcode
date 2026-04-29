class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> arr;
        for(auto& row: grid){
            for(auto& val : row){
                arr.push_back(val);
            }
        }

        int base = arr[0];
        for(int a: arr){
            if(abs(a-base) % x != 0){
                return -1;
            }
        }

        sort(arr.begin(),arr.end());

        int median = arr[arr.size()/2];

        int operation = 0;
        for(int a: arr){
            operation += abs(a-median)/x;
        }
        return operation;
        
    }
};