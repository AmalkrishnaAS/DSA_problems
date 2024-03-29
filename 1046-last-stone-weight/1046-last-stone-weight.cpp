class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq(stones.begin(),stones.end());
        
        while(!pq.empty()){
            if(pq.size()==1) return pq.top();
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            if(x==y) continue;
            if(x>y) pq.push(x-y);
            if(y>x) pq.push(y-x);
        }
        
        return 0;
    }
};