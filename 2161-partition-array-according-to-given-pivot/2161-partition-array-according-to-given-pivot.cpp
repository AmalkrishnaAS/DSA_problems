class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        vector<int> left;
        vector<int> right;
        vector<int> mid;
        
        for(auto &n:nums){
            if(n==pivot) mid.push_back(n);
            else if(n<pivot) left.push_back(n);
            else right.push_back(n);
        }
        
        left.insert(left.end(),mid.begin(),mid.end());
        left.insert(left.end(),right.begin(),right.end());
        return left;
        
    }
};