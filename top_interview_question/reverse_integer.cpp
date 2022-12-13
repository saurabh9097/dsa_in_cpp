#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int t=abs(x);
        int temp=x;
        long res=0;
        while(abs(x)>0){
            res=(res*10)+abs(x)%10;
            cout<<x%10;
            x/=10;
            if(res>(pow(2,31)-1)){
                return 0;
            }
        }
       return t==temp?res:-1*res;
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