#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>& a,int l,int r){
    int pivot=a[l];
    int i=l;
    int j=r;
    while(i<j){
        while(a[i]<=pivot) i++;
        while(a[j]> pivot) j--;
        if (i<j)
        {
            swap(a[i],a[j]);
        }
    }
 
        swap(a[l],a[j]);
    for(auto i :a){
        cout<<i<<" ";
    }
    cout<<" "<<j<<endl;
    return j;

}
void quickSort(vector<int>& a,int l,int r) {
    if(l<r){
    int pivot= partition(a,l,r);
    quickSort(a,l,pivot-1);
    quickSort(a,pivot+1,r);
    }
}
int main(){
    vector<int> a={1,89,2,45,222,36,355,23,22,11,124124};
    quickSort(a,0,a.size()-1);
    for(auto i :a){
        cout<<i<<" ";
    }
}