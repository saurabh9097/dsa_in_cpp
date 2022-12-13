#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int>preprocessKnuth_Morris_Pratt_algo(string pattern){
        int i=0,j=1;
        int s=pattern.size();
        vector<int>res(s);
        res[0]=0;
        while(j<pattern.size()){
            if(pattern[i]==pattern[j]){
                res[j]=i+1;
                i++,j++;
            }
            else if(i>0){
                i=res[i-1];
            }
            else{
                res[j]=0;
                j++;
            }
        }
        return res;
    }
    int strStr(string haystack, string needle) {
        if(needle.size()>haystack.size())return -1;
        vector<int>res=preprocessKnuth_Morris_Pratt_algo(needle);
        int i=0,j=0;
        while(i<haystack.size()&&j<needle.size()){
            if(haystack[i]==needle[j]){
                i++,j++;
            }
            else if(j>0){
                j=res[j-1];
            }
            else{
                i++;
            }
        }
        return j==needle.size()?i-j:-1;
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