#include<bits/stdc++.h>
using namespace std;
// #define N 8
bool row(vector<vector<int> >& board,int n,int r){
    for(int i=0;i<n;i++){
        if(board[r][i]!=0){
            return false;
        }
    }
    return true;
}
bool column(vector<vector<int> >& board,int n,int c){

    for(int i=0;i<n;i++){
        if(board[i][c]!=0){
            return false;
        }
    }
    return true;
}
bool diagonal(vector<vector<int> >& board,int n,int r, int c){
int i,j;
    for (i = r, j = c; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;

    /* Check lower diagonal on left side */
    for (i = r, j = c; j >= 0 && i < n; i++, j--)
        if (board[i][j])
            return false;
    for (i = r, j = c; i >= 0 && j < n; i--, j++)
        if (board[i][j])
            return false;
    for (i = r, j = c; j<n && i < n; i++, j++)
        if (board[i][j])
            return false;
    

    return true;
}
bool isSafe(vector<vector<int> >& board,int n,int r,int c){
    if (row(board,n,r))
    {
        if (column(board,n,c))
        {
            if (diagonal(board,n,r,c)){
                return true;
            }
        }
        
    }
    return false;
    
    }
bool queen(vector<vector<int> >& board,int n,int r){
    if (r==n){
        return true;
    }
    // board[r][c]=0;
    for (int c = 0; c < n; c++)
    {
        if(isSafe(board,n,r,c)){
            board[r][c] = 1;
            if (queen(board,n,r+1)){
                return true;

            }
            board[r][c] =0;
        }
    }
    
    return false;
}

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    vector<vector<int> > board(n, vector<int>(n, 0));
    
    queen(board,n,0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<board[i][j]<<"  ";
        }
        cout<<endl;
        
    }
    
}