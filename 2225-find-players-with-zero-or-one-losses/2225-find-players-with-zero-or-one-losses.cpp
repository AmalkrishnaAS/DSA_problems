class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        int n=matches.size();
        vector<int> v;
        set<int> total;
        map<int,int> m;
        for(int i=0;i<n;i++){
           v.push_back( matches[i][1]);
           total.insert(matches[i][0]);
            total.insert(matches[i][1]);
        }
        
        for(auto &n:v){
            m.insert({n,0});
        }
        for(auto &n:v){
            m[n]++;
        }
        
        
      
        
        vector<int> nil;
        vector<int> one;
        
        
        for(auto &it:m){
            if(it.second==1) one.push_back(it.first);
        }
        
        for(auto &n:total){
            if(m.find(n)==m.end()) nil.push_back(n);
            
        }
        
        return {nil,one};
    }
};