#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<pair<int,int>>temp;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0)temp.insert({i,j});
            }
        }
        for(auto k:temp){
            for(int i=0;i<m;i++){
                matrix[i][k.second]=0;
            }
            for(int i=0;i<n;i++){
                 matrix[k.first][i]=0;
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