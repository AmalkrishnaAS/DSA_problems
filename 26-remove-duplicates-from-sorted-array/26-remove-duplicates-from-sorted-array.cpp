class Solution {
public:
    int removeDuplicates(vector<int>& v) {
        
        int i=1;
        int j=1;        
        for(j=1;j<v.size();j++)
        {
            if(v[j]!=v[j-1])
            {
                v[i]=v[j];
                i++;
            }
        }
        
        return i;
        
        
        
        
     
    }
};