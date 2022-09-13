class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        
        sort(tokens.begin(),tokens.end());
        int l=0,r=tokens.size()-1;
        int points=0,ans=0;
        
        while(l<=r and (power>=tokens[l] or points>0)) {
        while(l<=r and power>=tokens[l]) {
            power-=tokens[l];
            l++;
            points++;
        }
        
        ans=max(ans,points);
        
        if(l<=r and points>0  ) {
            power+=tokens[r];
            r--;
            points--;
        }
        
    }
        
        return ans;
    }
};