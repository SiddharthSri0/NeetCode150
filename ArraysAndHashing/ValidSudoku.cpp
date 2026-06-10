class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       for (int i =0 ; i < 9  ; i ++){
            unordered_set<char> us;
            for(int j =0 ; j < 9 ; j ++){
                if(board[i][j] == '.') continue;
                if(us.count(board[i][j])) return false;
                
                us.insert(board[i][j]);
            }
       }

        for (int i =0 ; i < 9  ; i ++){
            unordered_set<char> us;
            for(int j =0 ; j < 9 ; j ++){
                if(board[j][i] == '.') continue;
                if(us.count(board[j][i])) return false;
               
                us.insert(board[j][i]);
            }
       }

       for(int block=0 ; block < 9 ;  block ++){
        unordered_set<char> us;
        for(int i =0 ; i < 3 ; i ++){
            for(int j=0 ; j< 3 ; j++){
                int row = (block/3) * 3 +i;
                int column = (block % 3 ) * 3 +j;
                if(board[row][column] == '.') continue;
                if(us.count(board[row][column])) return false;
                us.insert(board[row][column]);

            }
        }
       }
       return true; 
    }
};
