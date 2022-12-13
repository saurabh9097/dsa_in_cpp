#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string res="";
        for(auto i:s){
            if((i>='a'&&i<='z')||(i<='9'&&i>='0')){
                res+=i;
            }
        }
        for(int i=0;i<res.size()/2;i++){
            if(res[i]!=res[res.size()-1-i])return false;
        }
        return true;
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