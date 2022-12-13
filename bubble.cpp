#include<bits/stdc++.h>
using namespace std;
void bubble(vector<int> &a){
    for(int i = 0; i < a.size();i++){
        for(int j=0;j<a.size()-i-1;j++){
            if(a[j] > a[j+1]){
                swap(a[j], a[j+1]);
            }
        }
    }
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

vector<int> a={4,2,3,0,2423,423,234,234,3};
bubble(a);
for(auto i:a){
    cout << i << " ";
}
}