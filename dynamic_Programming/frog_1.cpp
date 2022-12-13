#include<bits/stdc++.h>
using namespace std;
const int N (1e5+10);
int main(){
	int n;
	cin>>n;
	int h[n];
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		h[i]=t;

	}
	int a=0;

	if(n==1){
		cout<<0;
	}

	else if(n==2){
		int b=abs(h[1]-h[0]);
		cout<<b;
	}
	else{
	int b=abs(h[1]-h[0]);
	for(int i=2;i<n;i++){
		int c=min(a+abs(h[i]-h[i-2]),b+abs(h[i]-h[i-1]));
		a=b;
		b=c;
	}
	cout<<b;
	}
}