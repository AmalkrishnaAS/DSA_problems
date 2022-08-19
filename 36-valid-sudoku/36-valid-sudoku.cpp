class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        map<int,set<int>> cols;
        map<int,set<int>> rows;
        map<pair<int,int>,set<char>> block;
        
        
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.') continue;
                if(rows[i].find(board[i][j]) !=rows[i].end()
                   or cols[j].find(board[i][j]) !=cols[j].end()
                   or block[{i/3,j/3}].find(board[i][j]) !=block[{i/3,j/3}].end()
                  
                  )   return false;
                
                
                rows[i].insert(board[i][j]);
                 cols[j].insert(board[i][j]);
                 block[{i/3,j/3}].insert(board[i][j]);
            }
        }
        
        return true;
        
    }
};