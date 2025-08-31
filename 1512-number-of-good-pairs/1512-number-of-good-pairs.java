class Solution {
    public int numIdenticalPairs(int[] nums) {
        int n = nums.length;
        int count = 0;
        for(int i = 0; i < n; i++){
            for(int j = n-1; j > i ; j--){
                if( nums[i] == nums [j] ){
                    count++;
                }
            }
        }
        return count;
        
        
    }
}