class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int row=0; row<9; row++){
            unordered_set<int>seen;
            for(int i=0;i<9;i++){
               if( seen.count(board[row][i])){
                return false;
               }
               else if(board[row][i]=='.'){
               continue;
               }
               else {
                seen.insert(board[row][i]);
               }
            }
        }
        for (int col=0; col<9; col++){
            unordered_set<int>seenj;
            for(int j=0;j<9;j++){
               if( seenj.count(board[j][col])){
                return false;
               }
               else if(board[j][col]=='.'){
               continue;
               }
               else {
                seenj.insert(board[j][col]);
               }
            }

        }
        for (int square = 0; square < 9; square++) {
            unordered_set<char> seen;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    int row = (square / 3) * 3 + i;
                    int col = (square % 3) * 3 + j;
                    if (board[row][col] == '.') continue;
                    if (seen.count(board[row][col])) return false;
                    seen.insert(board[row][col]);
                }
            }
        }
        return true;
    }
};
