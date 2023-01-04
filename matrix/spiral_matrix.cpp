#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int row_start=0;
        int row_end=matrix.size()-1;
        int col_start=0;
        int col_end=matrix[0].size()-1;
        vector<int>res;
        for(;row_start<=row_end&&col_start<=col_end;){
            for(int i=col_start;i<=col_end&&row_start<=row_end;i++){
                res.push_back(matrix[row_start][i]);
            }
            row_start++;

            for(int i=row_start;i<=row_end&&col_start<=col_end;i++){
                res.push_back(matrix[i][col_end]);
            }
            col_end--;

            for(int i=col_end;i>=col_start&&row_start<=row_end;i--){
                res.push_back(matrix[row_end][i]);
            }
            row_end--;

            for(int i=row_end;i>=row_start&&col_start<=col_end;i--){
                res.push_back(matrix[i][col_start]);
            }
            col_start++;
            
        }
        return res;
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