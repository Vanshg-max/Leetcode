class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int count =0;
        int blankCount =0;
        for(int i= 0; i<moves.size(); i++){
            if(moves[i] == 'L'){
                count= count - 1;
            }
            else if(moves[i] == 'R'){
                count = count + 1;
            }
            else{
               blankCount++;
            }
        }
        return abs(count)+blankCount;
        
    }
};