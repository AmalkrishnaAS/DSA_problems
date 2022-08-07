class Solution {
public:
    bool canAttendMeetings(vector<vector<int>>& v) {
        bool ans=true;
        int i=0,j=1;
        
        int n=v.size();
        sort(v.begin(),v.end());
        while(j<n){
            if(v[i][0]<v[j][1] and v[j][0]<v[i][1]){
                ans=false;
                break;
            }
            i++;
            j++;
        }
        
        return ans;
    }
};