class Solution {
public:
    int maximumUnits(vector<vector<int>>& v, int sizes) {
        
        sort(v.begin(),v.end(),[](vector<int> v1,vector<int> v2){
            return v1[1]>v2[1];
        });
        // for(auto &it:v){
        //     cout<<it[0]<<"::"<<it[1]<<" ";
        // }
        // cout<<endl;
        int count=0,units=0;
        
        
        for(auto &it:v)
        {
            if(count==sizes)  return units;
            if((count+it[0])<=sizes) {
                units+=(it[0]*it[1]);
                count+=it[0];
            }
            else{
                units+=(sizes-count)*it[1];
                count+=(sizes-count);
            }
            
            
        }
        
        return units;
        
    }
};