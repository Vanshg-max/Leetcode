class Solution {
    public void sortColors(int[] arr) {
        int low = 0;
        int mid = 0;
        int n = arr.length;
        int high = n - 1;
        while(mid<=high){
            if(arr[mid]==0){
                // swap low and mid 
                int temp = arr[mid];
                 arr[mid] = arr[low];
                arr[low] = temp;
                low ++;
                mid++;

            }
            else if(arr[mid] == 1){
                // best so dont swap
                mid++;
            }
            else{
                // swap arr[mid] and arr[ high];
                int temp = arr[mid];
                 arr[mid] = arr[high];
                arr[high] = temp;
               high--;
            }
            
        }
        
        
    }
}