#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>&v,int k,int m){
    int cow=1;
    int lastPos=v[0];
    for(int i=0;i<v.size();i++){
        if(v[i]-lastPos>=m){
            cow++;
            if(cow==k){
                return true;
            }
            lastPos=v[i];
        }
    }
    return false;
}


int aggressiveCows(vector<int> &v, int k)
{
    //    Write your code here.
    sort(v.begin(),v.end());
    int s=0;
    int ans= -1 ;
    int e=v[v.size()-1];
    while(s<=e){
        int m=s+(e-s)/2;
        if(isPossible(v,k,m)){
            ans=m;
            s=m+1;
        }
        else{
            e=m-1;
        }
    }
    return ans;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;
while(t--){
    int n,c;
    cin>>n>>c;
    vector<int>v;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        v.push_back(t);
    }
    int ans= aggressiveCows(v,c);
    cout<<ans<<endl;
}
}