#include<bits/stdc++.h>
using namespace std;
void heapify(vector<int> &a,int i){
    int largest = i;
    int left=i*2;
    int right=i*2+1;
    if(left<=a.size()-1 && a[left]>a[largest]){
        largest = left;
    }
    if(right<=a.size()-1 && a[right]>a[largest]){
        largest = right;
    }
    if(largest!=i){
        swap(a[largest],a[i]);
        heapify(a,largest);
    }

}
void heap_build(vector<int> &a){
    for(int i=(a.size())/2;i>0;i--){
        heapify(a,i);
    }
}
int main(){
    vector<int> a={0,10,30,50,20,35,15};
    heap_build(a);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}