#include<bits/stdc++.h>
using namespace std;
int kThLargestElement(vector<int>&a,int k){
    priority_queue<int> q;
    for(int i=0;i<k;i++){
        q.push(a[i]);
    }
    for (int i = k; i < a.size(); i++)
    {
        if(a[i]<q.top()){
            q.pop();
            q.push(a[i]);
        }
    }
    return q.top();

}
int main(){
    vector<int> a={20,10,60,30,50,40,21};
    cout<<kThLargestElement(a,3)<<endl;
}