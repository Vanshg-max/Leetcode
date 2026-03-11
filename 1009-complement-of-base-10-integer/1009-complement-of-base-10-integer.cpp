class Solution {
public:
    int bitwiseComplement(int n) {
    int res = 0;
    
    if(n == 0) return 1;
    while(res < n){
        res = res << 1;
        res =  res | 1;
        
    }
    return res ^ n;

        
    }
};