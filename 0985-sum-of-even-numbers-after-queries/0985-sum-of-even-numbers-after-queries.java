class Solution {
    public int[] sumEvenAfterQueries(int[] nums, int[][] query) {

        
        int i = 0;
        int sum =0;
        int[] arr = new int [query.length];
        

        while(i < query.length){
            
            nums [query[i][1]] = nums[query[i][1]] + query[i][0];
            for(int j =0 ; j< nums.length ; j++){
                if(nums[j]%2 ==0){
                    sum += nums[j];

                }
            }
            arr[i] = sum;
            sum =0;
            i++;
            
        }
        return arr;
        
    }
}