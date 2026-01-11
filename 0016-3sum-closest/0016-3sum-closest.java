class Solution {
    public int threeSumClosest(int[] nums, int target) {

        Arrays.sort(nums);
        int n = nums.length;
        int closestSum = nums[0] + nums[1] + nums[2];
        int minDiff = Math.abs(closestSum - target);
        for (int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;
            

            while (left < right) {
                int currSum = nums[i] + nums[left] + nums[right];
            int diff = Math.abs(currSum - target);
             if (diff < minDiff) {
                    minDiff = diff;
                    closestSum = currSum;
                }
                if (currSum == target) {
                    return currSum;

                } else if (currSum < target) {
                    left++;
                } else {
                    right--;
                }

            }
            
        }
        return closestSum;


    }
}