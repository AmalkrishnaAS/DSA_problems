class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        
        int ans;
        unordered_set<int> s;
        for(auto &n:nums){
            if(n){
                s.insert(n);
            }
        }
        
        return s.size();
    }
};