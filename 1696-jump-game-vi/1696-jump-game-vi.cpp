class Solution {
public:
    int maxResult(vector<int>& v, int k) {
        
        int n=v.size();
        if(not n) return n;
       
        
        priority_queue<pair<int,int>> pq;
        
        int max=v[0];
        pq.push({v[0],0});
        
        for(int i=1;i<n;i++){
            while(pq.top().second<i-k) pq.pop();
            
            pair<int,int> curr=pq.top();
            max=curr.first+v[i];
            pq.push({max,i});
            
        }
        
        return max;
        
    }
};