class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int left = 0;
        int right = numbers.length - 1;
        
        while (left < right) {
            int sum = numbers[left] + numbers[right];
            
            if (sum == target) {
                
                return new int[] {left + 1, right + 1};
                
            }
            
            if (sum < target) {
                left++;  // need a bigger sum, ++left pointer right
            } else {
                right--; // need a smaller sum,  ++ right pointer left
            }
        }
        
        return new int[] {-1, -1};
    }
}
