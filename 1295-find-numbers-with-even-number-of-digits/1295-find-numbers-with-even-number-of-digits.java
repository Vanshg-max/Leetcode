class Solution {
    public int findNumbers(int[] nums) {
        //contraints is give  1 <= nums[i] <= 10^5
        int count = 0 ;
        
        for( int num : nums){
            if(num > 9 && num < 100 || num > 999 && num < 10000 || num ==100000 ){
                count++;
            }
        }
        return count;
        
    }
}