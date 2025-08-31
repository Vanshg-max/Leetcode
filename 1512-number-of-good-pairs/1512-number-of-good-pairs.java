class Solution {
    public int numIdenticalPairs(int[] nums) {
        int[] arr = new int[101]; //number will is of range 0 - 100;
        int count = 0;
    //    count how many time number occur in nums arra and store it into arr
        for( int num : nums){
            arr[num]++;
        }

        for( int i : arr){
            count += i* (i-1) /2;
        }
        return count;

    }
}