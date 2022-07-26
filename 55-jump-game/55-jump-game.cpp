class Solution {
public:
    bool canJump(vector<int>& v) {
        
       int n=v.size();
        int goal=n-1;
        for(int i=n-2;i>=0;i--){
            if(i+v[i]>=goal){
                goal=i;
            }
        }
        
        return goal==0;
        
    }
};