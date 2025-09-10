class Solution {
    public int findPeakElement(int[] arr) {
        return binarySearch(arr);
        
    }
    int binarySearch(int[] arr){
        int start = 0;
        int end  = arr.length-1;

        while(start<end){
            int mid =start + (end-start)/2;
            if(arr[mid]>arr[mid+1]){
                // you are in decreasing array;
                end =mid;
            }
            else{
                // you are in increasing array;
                start = mid + 1;
            }
        }
        return start; //we can return both start/end both poitng to max of element in array
    }
}