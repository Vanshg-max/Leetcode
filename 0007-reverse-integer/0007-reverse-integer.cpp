class Solution {
public:
    int reverse(int x) {
        long int ans = 0;

        while(x != 0){
            int last = x%10;
            ans = ans*10 + last;
            x = x/10;

          
        }
          if(ans < INT_MIN || ans> INT_MAX){
                return 0;
            }

        return ans;


        
    }
};