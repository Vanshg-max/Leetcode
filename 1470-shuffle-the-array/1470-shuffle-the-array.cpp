class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(nums.size());
        int i = 0;
        int j = n;
        int k = 0;
        while(i < n){
            ans[k] = nums[i];
            ans[k+1] = nums[i + n];
            i++;
            j++;
            k+=2;
        }
        return ans;
        
    }
};