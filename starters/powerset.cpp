#include<bits/stdc++.h>
using namespace std;
int result = 0;
string resa;
bool palindrome(string s){
    for(int i=0;i<s.length()/2;i++){
        if(s[i]!=s[s.size()-i-1])
            return false;

    }
    return true;
}
void powerset(vector<string> &res,string s,int i=0,string curr=""){
    int n=s.length();
    if(i==n){
        res.push_back(curr);
        if (palindrome(curr))
        {
            if(curr.size()>result){
                result=curr.size();
                resa=curr;
            }
        }
        
        return;
    }
    powerset(res,s,i+1,curr+s[i]);
    powerset(res,s,i+1,curr);

}
int main(){
    string s="aba";
    vector<string> res;
    powerset(res,s);
    // sort(res.begin(),res.end());
    for(string i: res){
        cout<<i<<endl;
    }
    cout<<resa;
    return 0;
}