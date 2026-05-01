class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int fullSum = 0;
        int sum = 0;
        for(int i=0; i< nums.size(); i++){
            sum += i* nums[i];
            fullSum += nums[i];

        }
        
        int maxSum = sum;

         for(int i=1; i< nums.size(); i++){
            sum += fullSum - nums.size()*nums[nums.size()-i];
            maxSum = max(sum, maxSum);
         }
         return maxSum;
    }
};