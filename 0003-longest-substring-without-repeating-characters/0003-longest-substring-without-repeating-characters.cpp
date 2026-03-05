class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxLen =0;
        set<char> set;
        int left =0;
        for(int right =0 ;right<n; right++){
            while(set.contains(s[right]))
            {
                set.erase(s[left]);
                left++;
            }
            set.insert(s[right]);
            maxLen = max(maxLen,right-left+1);
        }
        return maxLen;
        
    }
};