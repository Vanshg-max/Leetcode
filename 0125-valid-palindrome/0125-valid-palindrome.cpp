class Solution {
public:
    bool isPalindrome(string s) {
        string clean = "";
        for(char c : s){
            if(isalnum(c)){
                clean += tolower(c);
            }
        }
        string temp = clean;
        reverse(clean.begin(),clean.end());
        return  temp == clean ;
        
    }
};