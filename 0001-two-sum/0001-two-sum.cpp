class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> valWithIdx;
        for(int i = 0; i<nums.size(); i++){
            valWithIdx.push_back({nums[i],i});
        }

        sort(valWithIdx.begin(),valWithIdx.end());

        int st = 0, en = nums.size()-1;
        while(st < en){
            int currSum = valWithIdx[st].first+valWithIdx[en].first;
            if(currSum == target){
                return {valWithIdx[st].second,valWithIdx[en].second};
            }
            else if(currSum > target){
                en--;
            }
            else{
                st++;
            }


        }
        
        return {};
    }
};