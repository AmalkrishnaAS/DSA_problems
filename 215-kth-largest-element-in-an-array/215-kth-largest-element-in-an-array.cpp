class Solution {
public:
    int findKthLargest(vector<int>& v, int k) {
  vector<int>::iterator ip;
         // ip = std::unique(v.begin(), v.end());
         // v.resize(std::distance(v.begin(), ip));
        sort(v.begin(),v.end(),greater<int>());
            return v[k-1];
        
    }
};