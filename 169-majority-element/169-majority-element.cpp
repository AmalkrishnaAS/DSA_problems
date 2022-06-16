class Solution {
public:
    int majorityElement(vector<int>& v) {
        
        unordered_map<int,int> m;
        
        
        for(auto &n:v)
        {
            m[n]++;
        }
        
        
        int n=v.size();
        
        int mid=n/2;
        
        for(auto &it:m)
        {
            if(it.second>mid)
                return it.first;
        }
        
        return -1;
        
    }
};