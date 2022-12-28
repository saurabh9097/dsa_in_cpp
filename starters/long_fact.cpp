#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<char> factorial(int N){
        // code here
         vector<char>res={'1'};
         for(int i=2;i<=N;i++){
            long long  carry=0;
            int len=res.size()-1;
            while(len>=0){
                long long temp=i*(res[len]-'0')+carry;
                res[len]=(char)((temp)%10+48);
                carry=temp/10;
                len--;
            }
            while(carry>0){
                res.insert(res.begin()+0,(char)(carry%10+48));
                carry/=10;
            }
            
        }
        return res;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<char> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}