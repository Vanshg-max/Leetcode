class Solution {
    public int maxProfit(int[] arr) {
      int minPrice=Integer.MAX_VALUE;
      int maxProfit=0;
      for(int i=0;i<arr.length;i++){
        if(arr[i]<minPrice){
            minPrice=arr[i];
        }
        else{
            int profit = arr[i]- minPrice;
            if (profit>maxProfit){
                maxProfit= profit;
            }
        }
       
      }
       return maxProfit;
        
    }
}