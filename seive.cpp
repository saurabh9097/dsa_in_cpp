#include<bits/stdc++.h>
using namespace std;
void seiveOfEratoscenes(vector<bool> & result,int n){
    result[0]=false;
    result[1]=false;
    for (int  i = 2; i <=sqrt(n); i++)
    {
        for (int j = i*2; j <=n; j+=i)
        {
            result[j]=false;
        }
        
    }
    // return result
    
}
int main(){
    int n;
    cout<<"Enter number";
    cin >> n;
    vector<bool> result(n+1,true);
    
    seiveOfEratoscenes(result,n+1);
    for (int i = 1; i <=n; i++)
    {   if (result[i]==true)
        cout<<i<<" IS PRIME"<<endl;
        else
        {
        cout<<i<<" IS NOT PRIME"<<endl;
        }
        
    }
    
}