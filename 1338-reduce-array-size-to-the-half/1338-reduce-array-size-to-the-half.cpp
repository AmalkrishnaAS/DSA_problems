class Solution {
public:
    int minSetSize(vector<int>& arr) {
        
        
        map<int,int> m;
        
        
        for(auto &n:arr) m[n]++;
        priority_queue<int> pq;
        
        
        for(auto &it:m) pq.push(it.second);
        int count=0;
        int ans=0;
        while(!pq.empty()){
            ans++;
            
            count+=pq.top();
            pq.pop();
            if(count>=arr.size()/2) return ans;
        }
        
        return ans;
        
    }
};