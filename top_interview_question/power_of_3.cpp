#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        return n>0&&(int)pow(3,(int)(log(INT_MAX)/log(3)))%n==0;
    }
};
// (int)(log(INT_MAX)/log(3)) this is for get the value of log(INT_MAX)base3 so we can power it to 3 and get the pow(3,value in this case ith is 19)
// if this number is divided by n this means the number is divided by 3.
// use pen and paper and think
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;
while(t--){

}
}

// for(explanation see link: https://leetcode.com/problems/power-of-three/solution/)