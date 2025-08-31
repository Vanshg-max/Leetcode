class Solution {
    public int[] smallerNumbersThanCurrent(int[] nums) {
    // sort the array
    int[] sorted = nums.clone();
     Arrays.sort(sorted);
    //  Hashmap
    HashMap<Integer,Integer> map = new HashMap<>();
    for(int i = 0; i < nums.length; i++){
        map.putIfAbsent(sorted[i],i);
    }
    // building result arr
    int[] result = new int[nums.length];
    for(int i= 0; i<nums.length; i++ ){
        result[i]= map.get(nums[i]);
    }
    return result;
        
    }
}