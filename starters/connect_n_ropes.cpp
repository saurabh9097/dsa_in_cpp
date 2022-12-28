#include<bits/stdc++.h>
using namespace std;
int nRopes(vector<int>&a){
    priority_queue<int> q;
    for (int i = 0; i < a.size(); i++)
    {
        q.push(-1*a[i]);
    }
    int sum=0;
    while(q.size()>1){
        int aa=-1*q.top();
        q.pop();
        int bb=-1*q.top();
        q.pop();
        int summ=aa+bb;
        sum+=summ;
        q.push(-1*summ);
    }
    return sum;
}
int main(){
    vector<int> a={2,5,4,8,6,9};
    cout<<nRopes(a);
}