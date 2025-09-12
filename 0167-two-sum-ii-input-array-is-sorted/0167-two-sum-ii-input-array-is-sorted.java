class Solution {
    public int[] twoSum(int[] numbers, int target) {
        
        int index2 =0;
        for(int i = 0;i<numbers.length;i++){
            
            int val =  target-numbers[i] ;
           index2 = binarysearch(numbers,val,i+1);
            if(index2>=0){
                return new int []{i+1,index2+1};
            }
           
        }
        return new int[] {-1,-1};

        
    }
    public int binarysearch(int[] arr , int target, int start){
        
        int end = arr.length-1;
        while(start<=end){
            int mid = start + (end - start)/2;
            if(arr[mid] == target){
                return mid;
            }
            else if( arr[mid]< target){
                start = mid +1;
            }
            else{
                end = mid - 1;
            }
        }
        return -1;
    }
}