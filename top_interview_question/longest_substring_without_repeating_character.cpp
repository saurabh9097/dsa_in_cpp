#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>res;
        int ans=0;
        int t=0;
        int i=0,j=0;
        while(j<=i and i<s.size()){
            if(res[s[i]]<1){
                res[s[i]]++;
                // t++;
                // ans=max(ans,i-j+1);
                // cout<<j<<i<<endl;
            }
            else{
                while(true){
                     res[s[j]]--;
                     if(s[i]==s[j]){
                        j++;
                        break;
                     }
                    j++;
                }
                res[s[i]]=1;
                
            }
            ans=max(ans,i-j+1);
            i++;
            
        }
        // ans=max(ans,i-j);
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