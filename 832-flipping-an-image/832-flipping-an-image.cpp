class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        for(auto &row:image) {
            reverse(row.begin(),row.end());
        }
        
        for(auto &row:image) {
            for(auto &val:row) {
                if(val==1) val=0;
                else val=1;
            }
        }
        
        return image;
        
    }
};