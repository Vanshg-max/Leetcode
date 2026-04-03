class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;

        for(int i = 0; i<nums.size(); i++){
            //find index
            int index =abs(nums[i]) - 1;
            //mark it negative
            if(nums[index] > 0){
            nums[index] = -nums[index];
            }

        }

        //find missing 
        for(int i =0;i<nums.size(); i++){
            if(nums[i] >0){
                result.push_back(i+1);
            }
        }
        return result;
        
    }
};