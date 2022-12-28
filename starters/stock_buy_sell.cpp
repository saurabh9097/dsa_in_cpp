#include<bits/stdc++.h>
using namespace std;

int buy_sell(vector<int> &a){
    int n=a.size();
    int min_so_far=a[0];
    int max_profit=0;
    for (int i = 0; i < n; i++)
    {
        min_so_far=min(min_so_far, a[i]);
        max_profit=max(max_profit, a[i]-min_so_far);
    }
    return max_profit;
}

int main() {
    vector<int> a={5,2,6,1,4};
    cout<<buy_sell(a)<<endl;
}