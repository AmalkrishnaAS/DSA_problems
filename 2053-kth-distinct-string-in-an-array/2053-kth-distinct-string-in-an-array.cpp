class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
       
        
        
        vector<string> v;
        
        int n=arr.size();
       
        unordered_map<string,int> m;
        
        for(auto &it:arr)
        {
            m[it]++;
        }
        
       
        
        int i=0;
        for(auto &s:arr)
        {
            if(m[s]>1)
                continue;
            if(i>=n)
            {
                return "";
            }
            if(i==k-1)
                return s;
            
            i++;
        }
        return "";
    }
};