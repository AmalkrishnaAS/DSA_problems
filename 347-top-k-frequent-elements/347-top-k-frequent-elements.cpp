class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
     unordered_map<int,int> m;
    for(auto &n:nums) m[n]++;
    priority_queue<pair<int,int>> pq;
        
    for(auto &it:m) {
        pq.push({it.second,it.first});
        
    }
        
        vector<int> ans;
        
        while(not pq.empty() and k){
            pair<int,int> p;
            p=pq.top();pq.pop();
            ans.push_back(p.second);
            k--;
        }
        
        return ans;
    }
};