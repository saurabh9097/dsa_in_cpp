// search  a 2d matrix for target
#include<bits/stdc++.h>
// #include<iostream.h>
using namespace std;                
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int l=0;
        int h=(row*col)-1;
        while(l<=h){
            int m=(l+h)/2;
            if(target<matrix[m/col][m%col]){
            
                h=m-1;
            }
            else if(target>matrix[m/col][m%col]){
            
                l=m+1;
            }
            else{
                return 1;
            }
        }
        return 0;
        
    }
};
int main(){
    vector<vector<int>> matrix={{1}};
    int target=1;
    Solution s;             
    cout<<s.searchMatrix(matrix,target);
}
