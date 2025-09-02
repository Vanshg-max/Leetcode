class Solution {
    public int findNumbers(int[] nums) {
        int count = 0;
        
        for(int num : nums){
            int tempcount = 0;
            while(num>0){
                num /=10;
                tempcount++;
            }
            if(tempcount%2 ==0){
                count++;
            }
        
        }
        return count;


    }
}