class Solution {
    public int[] smallerNumbersThanCurrent(int[] nums) {
        int  n = nums.length;
        int count = 0;
        int[] arr = new int[n];
        for (int i = 0;  i < n ; i++){
            for(int j = n-1; j >= 0; j--){
                if(nums[i]==nums[j] || i==j){
                    continue;
                }
                if(nums[i] > nums[j] ){
                    count++;
                }
                
            }
            arr[i] = count;
            count = 0;
        }
        return arr;
        
    }
}