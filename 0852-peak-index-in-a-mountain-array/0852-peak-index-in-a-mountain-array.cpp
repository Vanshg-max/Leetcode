class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s= 0;
        int e = size(arr)-1;

        int mid=0;
        int ans;
        while (s <= e){
                      mid = (s + e) /2;

            if(arr[mid] >arr[mid+1] &&  arr[mid] > arr[mid-1]){

                ans = mid;
                return ans;
            }
            else if( arr[mid] < arr[mid+1]){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
          
        }
        return s;
        
    }
};