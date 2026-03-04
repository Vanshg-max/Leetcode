class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> left(n,0), right(n,0);
        int leftMax = 0;
        int rightMax =0;
        


        for(int i = 0; i < n; i++ ){
            
            right[n-i-1] = rightMax;
            left[i] = leftMax;
            rightMax = max(height[n-i-1],rightMax);
            leftMax = max(height[i],leftMax);
            
            
        }
        int total;
        for(int i =0; i<n ; i++){
            int mn = min(left[i],right[i]);
            if(mn - height[i] > 0) total += mn - height[i];
        }
        return total;


        
        
    }
};