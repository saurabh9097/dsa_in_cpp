#include <bits/stdc++.h>
using namespace std;

int binExpIter(long long a, long long b, int M)
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
int main()
{
    int s = 1e6 + 10;
    int fact[s];
    fact[0] = 1;
    for (int i = 1; i < s; i++)
    {
        fact[i] = (fact[i - 1] * 1LL * i) % (int)(1e9 + 7);
    }
    // if we want to calculate nCr mod m then we can simply calculate n!/((n-r)!*r!) mod m if 
    // m is prime.
    // we can multiply n! and modular multiple inverse of ((n-r)!*r!) and take mod of the result
    // this will take log(m) time.
    // we have computed factorials firstly because if we are given Q queries the our program can
    // run in the given time bound.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int m = 1e9 + 7;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // fermats little theorem if p is prime number and a is not multiple of p
        // a^(p-2)=a^(-1)(mod p)
        // therefore a inverse mod m = {a^(m-2)}mod m
        cout << binExpIter(n, m - 2, m);
    }
}