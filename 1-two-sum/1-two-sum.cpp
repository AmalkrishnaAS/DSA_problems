class Solution {
public:
    vector<int> twoSum(vector<int>& v, int k) {
        
        
        vector<int> ans;
        map<int,int> hash;
        
        for(int i=0;i<v.size();i++)
        {
            if(hash.find(k-v[i])!=hash.end())
              {
                ans.push_back(hash[k-v[i]]);
                ans.push_back(i);
                break;
                
            }
        
            else
                hash.insert({v[i],i});
           
                
        }
            
        
        
        return ans;
    }
};