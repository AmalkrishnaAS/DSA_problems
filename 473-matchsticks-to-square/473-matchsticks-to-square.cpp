class Solution {
    public:
    vector<int> side={0,0,0,0};
    
    
    bool dfs(vector<int> &v,int i,int length){
        
        if(i==v.size()) return true;
        
        
        for(int j=0;j<4;j++){
            if((side[j]+v[i])<=length) {
                side[j]+=v[i];
                if(dfs(v,i+1,length)) return true;
                side[j]-=v[i];
            }
        }
        return false;
        
       
    }

    bool makesquare(vector<int>& v) {
        
        int add=accumulate(v.begin(),v.end(),0);
        
        if(add%4) return false;
        int length=add/4;
        sort(v.begin(),v.end(),greater<int>());
        return dfs(v,0,length);
        
        
        
        
        
    }
};