class Solution {
public:
    int pivotIndex(vector<int>& v) {
        
        
    int left=0;
    int sum=accumulate(v.begin(),v.end(),0);
    for(int i=0;i<v.size();i++){
        left+=v[i];
        
        
        cout<<sum<<"=="<<left<<endl;
        if(left==sum) return i;
        
        sum-=v[i];
        
    }
        
        return -1;
        
    }
};