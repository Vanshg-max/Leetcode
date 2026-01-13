class Solution {
    public int minSubArrayLen(int target, int[] arr) {
        // pattern variable size sliding window 
        int low = 0;
        int high = 0;
        int res = Integer.MAX_VALUE;
        int sum = 0;
        int n = arr.length;

        while(high < n){
            //hire
            sum = sum + arr[high];
            while(sum>=target){
                int len = high - low + 1;
                res = Math.min(res,len);
                // fire 
                sum =  sum - arr[low];
                low++;
            }
            high++;
        }
        return res == Integer.MAX_VALUE ? 0 : res;
        
    }
}