#include<bits/stdc++.h>
using namespace std;
// my solution
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int i = 0;
        while (i < nums.size() - 1)
        {
            if (nums[i] == nums[i + 1])
            {
                nums.erase(nums.begin() + i);
            }
            else
            {
                i++;
            }
        }
        return nums.size();
    }
};
// optimised

// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         int insertIndex = 1;
//         for(int i = 1; i < nums.size(); i++){
//             // We skip to next index if we see a duplicate element
//             if(nums[i - 1] != nums[i]) {    
//                 // Storing the unique element at insertIndex index and incrementing the insertIndex by 1 
//                 nums[insertIndex] = nums[i];     
//                 insertIndex++;
//             }
//         }
//         return insertIndex;
//     }
// };

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;
while(t--){

}
}
