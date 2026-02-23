class Solution {
public:
    string predictPartyVictory(string senate) {
         int n = senate.size();
        queue<int> radiant;
        queue<int> dire;
        
        
        for(int i = 0; i < n; i++) {
            if(senate[i] == 'R')
                radiant.push(i);
            else
                dire.push(i);
        }
        
        // Step 2: Simulate rounds
        while(!radiant.empty() && !dire.empty()) {
            
            int rIndex = radiant.front();
            int dIndex = dire.front();
            
            radiant.pop();
            dire.pop();
            
            if(rIndex < dIndex) {
                // Radiant bans Dire
                radiant.push(rIndex + n);
            } 
            else {
                // Dire bans Radiant
                dire.push(dIndex + n);
            }
        }
        
        // Step 3: Decide winner
        if(radiant.empty())
            return "Dire";
        else
            return "Radiant";
    }
        
    
};