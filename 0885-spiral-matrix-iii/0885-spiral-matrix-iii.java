class Solution {
    public int[][] spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        int[][] direction ={{0,1},{1,0},{0,-1},{-1,0}}; // east -> south -> west -> north
        ArrayList<int[]> res =  new ArrayList<>();
        int step = 0;
        int dir = 0; // 0 th index
        res.add(new int[]{rStart,cStart});

        while(res.size()< rows*cols){
            if(dir == 0 || dir == 2){
                step++;
            }
            for(int count = 0; count < step; count++){
                rStart += direction[dir][0];
                cStart += direction[dir][1];
                if(rStart >= 0  && rStart < rows && cStart >= 0 && cStart< cols)//va;;id cell
                {
                    res.add(new int[]{rStart,cStart});
                }
            }
            dir = (dir+1)%4;
        }
        return res.toArray(new int [res.size()][]);
        
    }
}