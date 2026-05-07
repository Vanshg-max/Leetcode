class Solution {
public:
    vector<int> maxValue(vector<int>& nums) {
        int n = nums.size();
        if (n == 0)
            return {};

        vector<int> suffixMin(n);
        suffixMin[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            suffixMin[i] = min(nums[i], suffixMin[i + 1]);
        }

        vector<int> ans(n);
        int i = 0;
        while (i < n) {
            int j = i;
            int currentMax = nums[i];

            while (j < n - 1 && currentMax > suffixMin[j + 1]) {
                j++;
                currentMax = max(currentMax, nums[j]);
            }

            for (int k = i; k <= j; k++) {
                ans[k] = currentMax;
            }

            i = j + 1; 
        }

        return ans;
    }
};