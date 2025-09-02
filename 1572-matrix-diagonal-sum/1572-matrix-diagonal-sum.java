class Solution {
    public int diagonalSum(int[][] arr) {
    //    for calculating sum of diagonal of matrix we use one loop
    int n = arr.length;
    int sum = 0;
    for(int i = 0; i < arr.length ; i++){
        sum += arr[i][i];
        sum += arr[i][n-1-i];
    }
    if(arr.length %2 == 1){
        sum -= arr[n/2][n/2];
    }
    return sum;
        
    }
}