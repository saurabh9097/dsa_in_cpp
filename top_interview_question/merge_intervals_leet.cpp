#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        ios_base::sync_with_stdio(false);
        vector<vector<int>> a;
        sort(intervals.begin(),intervals.end());
        for(auto interval:intervals){
            int n=a.size()-1;
            if(a.size()==0||a[n][1]<interval[0]){
                a.push_back(interval);
            }else{
                a[n][1]=max(a[n][1],interval[1]);
            }
        }
        return a;
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
