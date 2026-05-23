class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int,unordered_set<char>>rows;
        unordered_map<int,unordered_set<char>>column;
        unordered_map<int,unordered_set<char>>boxes;

        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]=='.') continue;
                char c = board[i][j];
                int boxIndex = (i/3)*3 + (j/3);
                if(rows[i].count(c) or column[j].count(c) or boxes[boxIndex].count(c)) return false;
                rows[i].insert(c);
                column[j].insert(c);
                boxes[boxIndex].insert(c);
            }
        }

        return true;

        
    }
};
