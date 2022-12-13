#include<bits/stdc++.h>
using namespace std;
/*
You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.




question_11.jpg
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. 
In this case, the max area of water (blue section) the container can contain is 49.
*/


// O(n^2)

// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int ans=0;
//         int n=height.size();
//         for(int i=0;i<height.size();i++){
//             int l=i;
//             int r=i;
//             int t=i;
//             while(t>=0){
//                 if(height[t]>=height[i])l=t;
//                 t--;
//             }
//             t=i;
//             while(t<n){
//                 if(height[t]>=height[i])r=t;
//                 t++;
//             }
//             ans=max(ans,(min(height[l],height[r])*(r-l)));
//         }
//         return ans;
//     }
// };

// O(n)
class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        int n=height.size();
        int i=0;int j=n-1;
        while(i<j){
            if(height[i]<=height[j]){
                ans=max(ans,height[i]*(j-i));
                i++;
            }
            else{
                ans=max(ans,height[j]*(j-i));
                j--;
            }
        }
        
        return ans;
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