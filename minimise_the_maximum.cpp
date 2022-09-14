#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int minimise(vector<int>& a){
        int maxi=0;
        for(int i=0; i<a.size(); i++){
            maxi+=a[i];
        }
        int mini=maxi;
        int sumi=0;
        for(int i=0; i<a.size(); i++){
            sumi+=a[i];
            maxi-=a[i];
            int diff=max(sumi,maxi);
            mini=min(mini,diff);
        }
        return mini;
    }
};
int main() {
    vector<int> a={1,2,3,4};
    Solution obj;
    cout << obj.minimise(a);
}