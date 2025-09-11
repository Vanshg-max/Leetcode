class Solution {
    public int findMaxValueOfEquation(int[][] points, int k) {
        int n = points.length;
        int[] dq = new int[n];  
        int head = 0, tail = 0; 
        int ans = Integer.MIN_VALUE;

        for (int j = 0; j < n; j++) {
            int xj = points[j][0];
            int yj = points[j][1];

            
            while (head < tail && xj - points[dq[head]][0] > k) {
                head++;
            }

            
            if (head < tail) {
                int i = dq[head];
                int candidate = (points[i][1] - points[i][0]) + (yj + xj);
                if (candidate > ans) ans = candidate;
            }

           
            int cur = yj - xj;
            while (head < tail && cur >= (points[dq[tail - 1]][1] - points[dq[tail - 1]][0])) {
                tail--;
            }

           
            dq[tail++] = j;
        }

        return ans;
    }
}
