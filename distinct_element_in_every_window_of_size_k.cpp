#include<bits/stdc++.h>
using namespace std;
class Solution{
    private:
        void distinct(vector<int> a,int k){ 
           map<int,int> res;
            for (int i = 0; i < k; i++)
            {
                res[a[i]]++;
            }
            cout<<res.size()<<" ";
            for (int i = k; i < a.size(); i++)
            {
                if (res[a[i-k]]==1)
                {
                    res.erase(a[i-k]);
                }
                else
                {
                    res[a[i-k]]--;
                }
                res[a[i]]++;
                cout<<res.size()<<" ";
            }
            
        }
    public:
     void sol(vector<int> a,int k){
         distinct(a,k);
     }
};
int main(){
    vector<int> a={1,2,2,1,3,1,1,3};
    Solution s;
    s.sol(a,4);
}