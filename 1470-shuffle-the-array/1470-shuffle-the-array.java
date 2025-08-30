class Solution {
    public int[] shuffle(int[] nums, int n) {
        int[] arr = new int[nums.length];
        int leftP = 0;
        int rightP = n;
        for(int i=0; i <nums.length ; i++ ){
            if(i%2==0){
                arr[i]= nums[leftP];
                leftP++;
            }
            else{
                arr[i]=nums[rightP];
                rightP++;
            }
        }
        return arr;
    }
}