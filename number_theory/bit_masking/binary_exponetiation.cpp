#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
int binExpRec(int a, int b)
{
    if (b == 0)
        return 1;
    long long res = binExpRec(a, b / 2);
    if (b & 1)
    {
        return (a * ((res * res) % M)) % M;
    }
    else
        return (res * res) % M;
}
int binExpIter(long long a, long long b)
{
    long long ans = 1;
    while (b) // while b>0
    {
        if (b & 1)
        {
            ans = (ans * a) % M; // if(0th bit of b is 1 then we have to take that multiple so ans = ans*a) otherwise ignore
        }
        a = (a * a) % M; // we have to always square that base to abtain -> 3^8 3^4 3^2 3^1 ... as for example
        b >>= 1;         // right shift b to get next bit
    }
    return ans;
}
// long test cases
int binMultipy(long long a, long long b)
{
    long long ans = 0;
    while (b) // while b>0
    {
        if (b & 1)
        {
            ans = (ans + a) % M; // if(0th bit of b is 1 then we have to take that multiple so ans = ans*a) otherwise ignore
        }
        a = (a + a) % M; // we have to always square that base to abtain -> 3^8 3^4 3^2 3^1 ... as for example
        b >>= 1;         // right shift b to get next bit
    }
    return ans;
}
int binExpIterExtreme(long long a, long long b)
{
    long long ans = 1;
    while (b) // while b>0
    {
        if (b & 1)
        {
            ans = binMultipy(ans, a); // if(0th bit of b is 1 then we have to take that multiple so ans = ans*a) otherwise ignore
        }
        a = binMultipy(a, a); // we have to always square that base to abtain -> 3^8 3^4 3^2 3^1 ... as for example
        b >>= 1;              // right shift b to get next bit
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
    }
}