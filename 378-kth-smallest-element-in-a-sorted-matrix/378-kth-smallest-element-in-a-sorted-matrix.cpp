class Solution {
public:
    int kthSmallest(vector<vector<int>>& v, int k) {
        
       priority_queue<int,vector<int>,greater<int>> pq;
        for(auto &row:v){
            for(auto &col:row) pq.push(col);
        }
        
    
    while(k-->1) pq.pop();
    return pq.top();
       
    }
};