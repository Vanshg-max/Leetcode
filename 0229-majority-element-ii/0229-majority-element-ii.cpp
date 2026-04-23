class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       //BRUTE FORCE 
        unordered_map<int, int> map;
        vector<int> res;
        int n = nums.size();
        for(int i=0; i<nums.size(); i++){
            map[nums[i]]++;
        }
        for(auto& entry: map){
            if(entry.second > n/3){
                res.push_back(entry.first);
            }
        }
        return res;
        
    }
};