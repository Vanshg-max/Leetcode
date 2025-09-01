class Solution {
    public int[] createTargetArray(int[] nums, int[] index) {
        // int[] target = new int[nums.length];
        // for( int i = 0; i < nums.length ; i++){
        //     int tindex = index[i];
        //     int telement = nums[i];
        //     target[tindex] = telement;
        // }
        // return target;

        ArrayList<Integer> list = new ArrayList <> ();
        for(int i = 0 ;i<nums.length ;i++){
            int tindex = index[i];
            int telem = nums[i];
            list.add(tindex,telem);
        }
        int[] arr = list.stream().mapToInt(Integer::intValue).toArray();
        return arr;
    }
}