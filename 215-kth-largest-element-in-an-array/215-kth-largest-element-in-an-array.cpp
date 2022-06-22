class Solution {
public:
    int findKthLargest(vector<int>& v, int k) {
  // vector<int>::iterator ip;
  //        ip = std::unique(v.begin(), v.end());
  //        v.resize(std::distance(v.begin(), ip));
        nth_element(v.begin(),v.begin()+(k-1),v.end(),greater<int>());
            return v[k-1];
        
    }
};