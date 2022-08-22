 class Solution {
public:
    
    
    int countPoints(string rings) {
        int n=rings.size()/2;
        map<int ,set<char>> m;
        for(int i=1;i<rings.size();i+=2){
            int index=rings[i]-48;
            char color=rings[i-1];
            m[index].insert(color);
        }
        int ans=0;
        vector<char> cols={'R','G','B'};
        
        
        for(auto &it:m){
            
            bool flag=true;
            for(auto &col:cols){
                if(it.second.find(col)==it.second.end()) {
                    flag=false;
                }
            }
            if(flag) ans++;
        }
        return ans;
    }
};