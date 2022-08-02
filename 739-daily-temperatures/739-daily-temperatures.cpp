class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& v) {
        
        stack<pair<int,int>> s;
        
        vector<int> ans(v.size(),0);
        
        for(int i=0;i<v.size();i++){
            while(not s.empty() and s.top().second<v[i]){
                pair<int,int> p=s.top();
                s.pop();
                int index=p.first;
                int val=i-index;
                ans[index]=val;
                
            }
            
            s.push({i,v[i]});
        }
        
        return ans;
        
    }
};