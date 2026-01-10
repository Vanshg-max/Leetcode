class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int low = 0;
        long sum = 0;
        int high = numbers.length-1;
        while(low <= high){
             sum = numbers[low] + numbers[high];
            if(sum == target){
                return new int [] {low+1,high+1};
            }
            else if(sum > target){
                high--;
            }
            else{
                low++;
            }
        }
        return new int[] {low+1,high+1};
        
    }
}