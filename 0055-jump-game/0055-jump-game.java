class Solution {
    public boolean canJump(int[] nums) {
        int leng = nums.length;
        if(leng == 0){
            return false;
        }
        int val = nums[1];
        int count = 0;
        for(int i = 2 ; i< leng;i++){
            count++;
                
        }
        return val == count;
       
       

        
        
    }
}