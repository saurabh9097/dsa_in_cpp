#include<bits/stdc++.h>
using namespace std;


class Solution {
public:

    void checkCells(int n, int m, vector<vector<char>>& board, int row, int col){

        if(board[row][col] == 'O'){

            board[row][col] = '.';

            if(row-1 >= 0)
                checkCells(n, m, board, row-1, col);

            if(row+1 < n)
                checkCells(n, m, board, row+1, col);


            if(col-1 >= 0)
                checkCells(n, m, board, row, col-1);


            if(col+1 < m)
                checkCells(n, m, board, row, col+1);
        }
    }

    void solve(vector<vector<char>>& board) {

        ios_base::sync_with_stdio(false);
        // cin.tie(NULL);
        // cout.tie(NULL);

        
        int n = board.size();
        int m = board[0].size();

        // Check first and last row
        for(int j=0; j<m; j++){

            checkCells(n, m, board, 0, j);
            checkCells(n, m, board, n-1, j);
        }

        // Check first and last column
        for(int i=1; i<n-1; i++){

            checkCells(n, m, board, i, 0);
            checkCells(n, m, board, i, m-1);
        }


        for(int i=0; i<n; i++){

            for(int j=0; j<m; j++){

                if(board[i][j] == '.')
                    board[i][j] = 'O';
                else if(board[i][j] == 'O')
                    board[i][j] = 'X';
            }
        }
    }
};

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;
while(t--){

}
}