#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;

int main()
{

    vector<bool> is_prime(N, true);
    vector<int> l_prime(N, 0), h_prime(N, 0);
    for (int i = 2; i< N; i++)
    {

        if (is_prime[i] == true)
        {
            l_prime[i]=h_prime[i]=i;
            for (int j = 2 * i; j < N; j += i)
            {
                is_prime[j] = false;
                h_prime[j] = i;
                if (l_prime[j] == 0)
                {
                    l_prime[j] = i;
                }
            }
        }
    }
    // PRIME FACTORS
    for(int i=0;i<100;i++){
        cout<<i<<" "<<l_prime[i]<<" "<<h_prime[i]<<endl;
    }
    int n;
    cin>>n;
    vector<int>prime_factors;
    unordered_map<int,int>ct;
    while (n>1)
    {   
        int lowest_prime=l_prime[n];
        while(n%lowest_prime==0){
            n/=lowest_prime;
            prime_factors.push_back(lowest_prime);
            ct[lowest_prime]++;
        }
    }
    for(auto i:prime_factors){
        cout<<i<<" ";
    }
    cout<<endl;
    for(auto i:ct){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    
    
}