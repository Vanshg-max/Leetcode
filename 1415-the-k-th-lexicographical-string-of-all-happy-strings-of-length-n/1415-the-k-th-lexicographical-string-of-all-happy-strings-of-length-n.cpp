class Solution {
public:


    void solve(int n, int k,string curr, int &count,string &ans){
        if(curr.size() == n){
            count++;
            if(count == k ){
                ans = curr;
                
            }
            return;
        }

        for(char ch:{'a','b','c'}){
            if(curr.size() > 0 && curr.back() == ch)
                continue;

            solve(n, k, curr + ch, count, ans);

            if(ans != "") return;

        }

    }
    string getHappyString(int n, int k) {
       
        int count = 0;
        string ans ="";
        solve(n,k,"",count,ans);
        return ans;

        
    }
};