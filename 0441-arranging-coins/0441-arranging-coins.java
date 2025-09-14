class Solution {
    public int arrangeCoins(int n) 
    {  
        int val =n ;
        int count =0;
        for(int  i = 1; val >= i; i++){
            val -= i;
            count++;
        }
        return count;
}
}