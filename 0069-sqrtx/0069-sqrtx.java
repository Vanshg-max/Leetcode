class Solution {
    public int mySqrt(int x) {
        int start = 1;
        int end =  x;
        while(start <= end){
            int mid =start + (end - start) /2;
            double squareRoot = (long) mid*mid;
            if(squareRoot == x){
                return mid;
            }
            if(squareRoot<=x){
                start = mid + 1;
            }
            else{
                end = mid-1;
            }
        }
        return end;

        
    }
}