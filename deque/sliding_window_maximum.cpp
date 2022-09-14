#include<bits/stdc++.h>
using namespace std;
void maximum(vector<int>a,int k){
    deque<int>q;
    int i;
    for(int i=0;i<k;i++){
        while(!q.empty()&&a[i]>=a[q.back()]) q.pop_back();
        q.push_back(i);
    }
    cout<<a[q.front()]<<" ";
    for(i=k;i<a.size();i++){
        while(!q.empty()&&q.front()<=i-k) q.pop_front();
        while(!q.empty()&&a[i]>=a[q.back()]) q.pop_back();
        q.push_back(i);
        cout<<a[q.front()]<<" ";
    }
}
int main(){
    vector<int>a={4,1,3,5,1,2,3,2,1,1,5};
    maximum(a,3);
    getchar();

}