#include<bits/stdc++.h>
using namespace std;
void insert(vector<int> &a,int value){
    a.push_back(value);
    int i=a.size()-1;
    while (i>=1)
    {
        int parent=i/2;
        if(a[parent]<a[i]){
            swap(a[parent],a[i]);
            i=parent;
        }
        else return;
    }
    
}
int main(){
    vector<int> a={50,30,40,10,5,20,30};
    int v=60;
    insert(a,v);
    for(auto i:a){
        cout<<i<<" ";
    }
}