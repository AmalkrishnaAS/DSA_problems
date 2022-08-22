class Solution {
public:
    int edgeScore(vector<int>& edges) {
        
        int n=edges.size();
        
        
        map<long long int ,long int> m;
        
        
        for(int i=0;i<n;i++){
            m[edges[i]]+=i;
        }
        
        int ans=-1;
        int mini=INT_MAX;
        for(auto &it:m){
            
            if(it.second>m[ans]){
                ans=it.first;
            }
            
        }
        return ans;
    }
};