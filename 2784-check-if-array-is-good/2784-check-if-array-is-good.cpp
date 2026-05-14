class Solution {
public:
    bool isGood(vector<int>& nums) {
        int mx = INT_MIN;
        int n = nums.size();
        for(int i =0 ;i <nums.size(); i++){
            mx = max(mx, nums[i]);
        }

        sort(nums.begin(), nums.end());
        
        if(mx+1 == n ){
            for(int i=0 ; i<nums.size()-2; i++){
                if(nums[i] != i+1){
                    return false;
                }

            }

            if(nums[n-2] == nums[n-1]) return true;
        }

        
            return false;
        
        
        
    }
};