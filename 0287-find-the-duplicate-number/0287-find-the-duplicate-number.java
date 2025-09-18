class Solution {
    public int findDuplicate(int[] nums) {
        // Optimial solution for this is by using set
        Set<Integer> set = new HashSet<>();
        for(int i = 0 ; i < nums.length; i++ ){
            if(!set.add(nums[i])){
                return nums[i];
            }
        }
        return nums.length;
        
 
    }
}