#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row =matrix.size()-1;
        int col=matrix[0].size()-1;
        int low=0;
        int high=col;
        while(low<=high){
           int mid=(low+high)/2;
            if(target>matrix[mid][0]){
                low=mid;
            }
            else if(target<matrix[mid][0]){
                high=mid-1;
            }
            else if(target==matrix[mid][0]){
                return 1;
            }            
            if (low==high){
                int l=0;
                int h=col;
                while(l<h){
                    int m=(l+h)/2;
                    if(target<matrix[low][m]){
                        h=mid-1;
                    }
                    else if(target==matrix[low][m])
                        return 1;
                    else{
                        l=mid+1;
                    }
                    
                }
                return 0;
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

// create a random matrix of size n*n and find the target in it.

