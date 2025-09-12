class Solution {
    public int mySqrt(int x) {
    //    optimized solution
    if(x<2) return x;
    int start = 1;
    int end = x/2;
    int ans= 1;

    while(start<=end){
        int mid = start + (end-start) /2;
        long square = (long) mid*mid;
        if(square == x){
            return mid;
        }
        else if(square < x ){
            ans =mid;
            start = mid + 1 ;
        }
        else{
            end = mid -1;
        }
    }
    return ans;
        
    }
}