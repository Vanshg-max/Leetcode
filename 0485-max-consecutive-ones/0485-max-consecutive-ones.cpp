class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int maxi = INT_MIN;

        for(int i=0; i<n; i++){
            if(nums[i] == 1) {
                count++;
                maxi = max(count,maxi);
            }
            else{
                count = 0;
            }
        }
        if(maxi >= 0) return maxi;
        else{return 0;}
        
    }
};