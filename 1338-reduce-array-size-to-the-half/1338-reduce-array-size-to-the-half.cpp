class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> m;
        
        for(auto &n:arr){
            m[n]++;
        }
        
        int ans=0;
        int count=0;
        int limit=arr.size()/2;
        
        priority_queue<int> pq;
        for(auto &it:m) pq.push(it.second);
        while(not pq.empty() and count<limit) {
            ans++;
            count+=pq.top();
            pq.pop();
            
        }
        
        return ans;
    }
};