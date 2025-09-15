class Solution {
    public int findKthPositive(int[] arr, int k) {
        for(int num : arr){
            if(num <= k){
                k +=1;
            }
            else{
                break;
            }
        }
        return k;
        
    }
}