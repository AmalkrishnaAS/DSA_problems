class Solution {
public:
    int convertTime(string current, string correct) {
        
       int delta=(((correct[0]-current[0])*10)+(correct[1]-current[1]))*60;
        delta+=(correct[3]-current[3])*10+(correct[4]-current[4]);
        
        int ans=0;
        ans+=delta/60;
        delta=delta%60;
         ans+=delta/15;
        delta=delta%15;
         ans+=delta/5;
        delta=delta%5;
         ans+=delta/1;
        delta=delta%1;
        
        return ans;
        
        
    }
};