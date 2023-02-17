#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+10;
int main() {
	int n;
	int q;
	cin>>n>>q;
	// cout<<n;
	int x;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	unordered_set<int>available;
	for(int i=0;i<n;i++){
		int temp=a[i];
		for(long long j=temp;j<=N;j*=temp){
			available.insert(j);
		}
	}
	vector<bool> is_prime(N+1, true);
	vector<int> l_prime(N+1, 0);

    for (int i = 2; i<=N; i++)
    {

        if (is_prime[i] == true)
        {
            l_prime[i]=i;
            for (int j = 2 * i; j <=N; j += i)
            {
                is_prime[j] = false;
                if (l_prime[j] == 0)
                {
                    l_prime[j] = i;
                }
            }
        }
    }
	while(q--){
		cin>>x;

		int temp=x;
		// unordered_set<int>st;
		vector<int>prime_factors;
		while (x>1)
		{   
			int lowest_prime=l_prime[x];
			while(x%lowest_prime==0){
				x/=lowest_prime;
				// cout<<lowest_prime<<" ";
			}
				prime_factors.push_back(lowest_prime);

		}
		// cout<<endl;
		// for(auto i:prime_factors)cout<<i<<" ";
		// cout<<endl;
		int s=prime_factors.size();
		bool flag=0;
		for(int i=0;i<s;i++){
			for(int j=i;j<s;j++){
				int product=prime_factors[i]*prime_factors[j];
				
				if(i==j&&temp%product!=0)continue;
				int rem=temp/(prime_factors[i]*prime_factors[j]);
				if(available.find(rem)!=available.end() or rem==1){
					flag=1;
					// cout<<rem<<" "<<prime_factors[i]<<" "<<prime_factors[j];
					cout<<"YES\n";
					break;
				}
			}
			if(flag)break;
		}
		if(!flag)cout<<"NO\n";
	}
}