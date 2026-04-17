class Solution {
public:
    int minMirrorPairDistance(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,vector<int>> mp;
        int mn = INT_MAX;
        for(int i=0;i<n;i++){
            mp[nums[i]].push_back(i);

        }

        for(int i=0;i<n;i++){
            int it = nums[i];
            int rev = 0;
            while(it > 0){
                rev = rev * 10 + it%10;
                it/=10;
            }

            if(!mp.count(rev)) continue;
            int sz = mp[rev].size();
            int index = upper_bound(mp[rev].begin(),mp[rev].end(),i) - mp[rev].begin();
            if(index < sz) mn = min(mp[rev][index] - i,mn);
        }

        return mn == INT_MAX? -1 : mn;
    }
};