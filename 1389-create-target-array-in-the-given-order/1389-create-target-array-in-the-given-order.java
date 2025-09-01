class Solution {
    public int[] createTargetArray(int[] nums, int[] index) {
        ArrayList<Integer>list  = new ArrayList<>();
        int[] target = new int[nums.length];
        for(int i = 0; i < nums.length ; i++ ){
            list.add(index[i],nums[i]);
        }
        for(int i = 0; i < list.size(); i++){ //list convert into arr;
            target[i] = list.get(i);
        }
        return target;
    }
}