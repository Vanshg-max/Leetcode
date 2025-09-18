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
        
        
        
        
        
        // Better aproach using count array

        // int[] count = new int [nums.length+1];
        // for(int i = 0; i < nums.length; i++ ){
        //     count[nums[i]]++;
        //     if(count[nums[i]]>1){
        //         return nums[i];
        //     }
        // }
        // return nums.length;





        // brute force approach time complexity: O(N^2)
        // for (int i = 0 ; i < nums.length ;i++){
        //     for(int  j = i+1; j < nums.length;j++){
        //         if(nums[i]==nums[j]){
        //             return nums[i];
        //         }
        //     }
        // }
        // return nums.length;
        
    }
}