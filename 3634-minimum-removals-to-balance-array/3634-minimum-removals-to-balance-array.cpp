class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int count = n-1;
        for(int i =0 ; i<n; i++){
           long long  current =1ll * nums[i] * k;
            int index  = upper_bound(nums.begin(), nums.end(),current)-nums.begin();
            int rightcount = n - index;
            int leftcount  = i ;
            count = min (count,leftcount+rightcount);



        }
        return count;
        
    }
};