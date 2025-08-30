class Solution {
    public int maximumWealth(int[][] accounts) {
            int sum =0;
            int maxwealth=0;
        for (int row =0; row < accounts.length; row++){
            for ( int cols =0; cols < accounts[row].length; cols++){
                sum = sum + accounts[row][cols];
            }
            maxwealth = Math.max(maxwealth,sum);
            sum=0;
        }
        return maxwealth;
        
    }
}