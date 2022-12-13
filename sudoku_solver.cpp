#include<bits/stdc++.h>
using namespace std;
bool safe(int board[9][9],int r,int c,int num){
    for (int i = 0; i < 10; i++)
    {
        if (board[r][i]==num){
            return false;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (board[i][c]==num)
        {
            return false;   
        }
    }
    int row=r-r%3;
    int column=c-c%3;
    for (int i = row; i < row+3; i++)
    {
        for (int j = column; j < column+3; j++)
        {
            if (board[i][j]==num)
            {
                return false;
            }   
        }   
    }
    return true;
}

bool solver(int board[9][9]){
    int r=-1;
    int c=-1;
    bool em =true;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (board[i][j]==0)
            {
                r=i;
                c=j;
                em=false;
                break;
            }   
        }
        if(!em){
        break;
        }
    }
    if (em)
    {
        return true;
    }
    
    for (int num = 1; num < 10; num++)
    {
        if(safe(board,r,c,num)){
            board[r][c]=num;  
            if (solver(board))
                return true;
            board[r][c]=0;
            
        }

    }
    
    return false;
}
int main(){
    int board[9][9] = 
                       {{1, 0, 0, 0, 0, 0, 0, 0, 0 },
                       { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
                       { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
                       { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
                       { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
                       { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
                       { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
                       { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
                       { 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
    if(solver(board)){
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0;j < 9; j++)
            {
                cout<<board[i][j]<<" ";
            }
            
            cout<<endl;
    }
    }
}