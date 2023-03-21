class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> ex(heights);
        sort(ex.begin(),ex.end());
        
        int ans=0;
        
        for(int i=0;i<heights.size();i++) {
            if(heights[i]!=ex[i]) ans++;
        }
        return ans;
    }
};