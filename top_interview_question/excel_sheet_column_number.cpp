#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans=0;
        for(int i=columnTitle.size()-1;i>=0;i--){
            int t=columnTitle.size()-1-i;
            ans+=((columnTitle[i]-'A')+1)*pow(26,t);
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