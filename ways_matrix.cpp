#include<bits/stdc++.h>
using namespace std;
int count1(int n , int m){
    if(n==1 || m==1) return 1;
    else
        return count1(n,m-1)+count1(n-1,m);
}

int main() {
    int n, m;
    cout << " eNter N: ";
    cin>>n;
    cout<<"eNter M: ";
    cin>>m;
    // int **res;
    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 0; j <= m; j++)
    //     {
    //         res[i][j]=0;
    //     }
        
    // }
    
    cout<<count1(n,m);
}




// for i in ns:
//     for j in i:
//         if j in vowel:
//             count=count+1