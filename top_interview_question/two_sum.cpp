#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>res;
        for(int i=0;i<nums.size();i++){
            if(res.find(nums[i])!=res.end()){
                return {i,res[nums[i]]};
            }
            res[target-nums[i]]=i;
        }
        return {-1};
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