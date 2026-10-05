class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; ++ i){
            unordered_set<char> hashSet;
            for(int j = 0; j < 9; ++j){
                if(board[i][j] == '.') continue;
                if(hashSet.count(board[i][j])) return false;
                hashSet.insert(board[i][j]);
            }
        }
        for(int j = 0; j < 9; ++ j){
            unordered_set<char> hashSet;
            for(int i = 0; i < 9; ++i){
                if(board[i][j] == '.') continue;
                if(hashSet.count(board[i][j])) return false;
                hashSet.insert(board[i][j]);
            }
        }
        for(int n = 0; n < 9; ++n){
            unordered_set<char> hashSet;
            for(int i = 0; i < 3; ++i){
                for(int j = 0; j < 3; ++j){
                    int row = 3 * (n / 3) + i;
                    int col = 3 * (n % 3) + j;
                    if(board[row][col] == '.') continue;
                    if(hashSet.count(board[row][col])) return false;
                    hashSet.insert(board[row][col]);
                }
            }
        }
        return true;
    }
};
