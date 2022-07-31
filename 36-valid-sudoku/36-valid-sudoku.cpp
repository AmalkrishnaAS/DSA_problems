class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        map<int,set<char>> m1,m2;
        map<pair<int,int>,set<char>> m3;
        
        
        for(int i=0;i<9;i++) {
            for(int j=0;j<9;j++) {
                
                if(board[i][j]=='.') continue;
                
                if(m1[i].find(board[i][j]) !=m1[i].end()
                   or m2[j].find(board[i][j]) !=m2[j].end()
                   or m3[{i/3,j/3}].find(board[i][j]) !=m3[{i/3,j/3}].end()
                  )
                    return false;
                
                m1[i].insert(board[i][j]);
                m2[j].insert(board[i][j]);
                m3[{i/3,j/3}].insert(board[i][j]);
                
            }
        }
        return true;
    }
};