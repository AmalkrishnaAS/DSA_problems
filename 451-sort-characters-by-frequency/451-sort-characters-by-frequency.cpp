class Solution {
public:
    string frequencySort(string s) {
        
        map<char,int> m;
        
        
        for(auto &c:s){
            m[c]++;
        }
        
        vector<pair<int,char> >v;
        
        for(auto ele: m){
            v.push_back({ele.second, ele.first});
            // cout<<ele.second<<endl;
        }
        
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        
        string ans="";
        for(auto ele: v){
            while(ele.first){
                // cout<<ele.first<<endl;
                ele.first--;
                ans.push_back(ele.second);
            }
        }
        return ans;
    }
};