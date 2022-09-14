#include <bits/stdc++.h>
using namespace std;

int joseph(int n, int k)
{
    if (n==1){
        return 0;
    }
    return (joseph(n-1,k)+k)%n;
}
int main()
{
    cout << joseph(5, 3);
}