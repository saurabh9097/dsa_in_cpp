#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        int ans = INT_MIN;
        int cnt = 0;
        for(int i=0;i<nums.size();++i){
            cnt += nums[i];
            ans = max(ans, cnt);
            if(cnt < 0) cnt = 0;
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