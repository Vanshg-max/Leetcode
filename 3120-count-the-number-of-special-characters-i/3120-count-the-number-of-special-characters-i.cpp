class Solution {
public:
    int numberOfSpecialChars(string word) {
        set<char> st;
        int count = 0;
        for(char ch : word){
            st.insert(ch);
        }

        for(char ch='a'; ch <= 'z'; ch++){
            if(st.count(ch) && st.count(toupper(ch))){
                count++;
            }
        }
        return count;
    }
};