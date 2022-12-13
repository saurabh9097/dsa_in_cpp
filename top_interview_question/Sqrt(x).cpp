#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int mySqrt(int x) {
        if(x==0||x==1)return x;
        if(x==2||x==3)return 1;
        int l=1;
        int h=x/2;
        int ans=1;
        while(l<=h){
            int m=l+(h-l)/2;
            if((long long)m*(long long)m==x)return m;
            else if((long long)m*(long long)m<x){
                ans=m;
                l=m+1;
            }
            else{
                h=m-1;
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