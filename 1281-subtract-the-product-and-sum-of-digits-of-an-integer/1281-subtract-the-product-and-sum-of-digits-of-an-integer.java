class Solution {
    public int subtractProductAndSum(int n) {
        int product =1;
        int sum =0;
        int temp = n;
        while( temp > 0){
            int last = temp % 10; // last digit 
            product *= last;
            sum += last;
            temp /= 10;
        }
        return product-sum;
        
    }
}