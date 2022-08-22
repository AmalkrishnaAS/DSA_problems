class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        int ans=0;
        sort(grades.begin(), grades.end());
        int ind=0; // which index i am currently at
        int n=grades.size();
        int len=0; // last sequence inte length
        while(ind<n){
            int curlen=0; // length of this sequence
            while(ind<n && (len>=curlen)){
                ind++;
                curlen++;
            }
            if(curlen>len)ans++;
            len=curlen;
        }
        return ans;
    }
};

// [10,6,12,7,3,5]
// [3,5,6,7,10,12]
// 3
