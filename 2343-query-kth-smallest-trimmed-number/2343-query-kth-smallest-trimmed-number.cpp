class Solution {
public:
      typedef pair<string,int> psi;
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
        
        
      vector<int> ans;
        
        for(auto &q:queries){
            vector<psi> v;
            for(int i=0;i<nums.size();i++){
                int trimsize=q[1];
                int n=nums[i].size();
                string x=nums[i].substr(n-trimsize);
                v.push_back({x,i});
            }
            
            sort(v.begin(),v.end());
            
            int k=q[0];
            ans.push_back(v[k-1].second);
        }
        return ans;
    }
};