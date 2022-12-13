#include<bits/stdc++.h>
using namespace std;
// selection sort in python?
class Solution {
public:
       bool increasingTriplet(const vector<int>& nums) {
        int first = numeric_limits<int>::max();
        int second = numeric_limits<int>::max();
        for (int num : nums) {
            if (num <= first) {
                first = num;
            } else if (num <= second) {
                second = num;
            } else {
                return true;
            }
        }
        return false;
    }
};

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
Solution s;
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++){
        int te;
        cin>>te;
        a.push_back(te);
    }
    cout<<s.increasingTriplet(a)<<endl;
}
}