class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1;
        int i =0;
        int n = nums.size();
        sort(nums.begin(),nums.end());

        while(i < n-1){
            if(nums[i] = nums[i+1]){
                count++;
                if(count > n/2){
                    return nums[i];
                }

            }
            else{
                count = 1;
            }
            i++;

        }
        return nums[0];
        
    }
};