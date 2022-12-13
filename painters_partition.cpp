//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    bool possible(int arr[],long long n,long long k,long long m){
        long long paint=1;
        long long timee=0;
        for(int i=0;i<n;i++){
            if(timee+arr[i]<=m){
                timee+=arr[i];
            }
            else{
                paint++;
              if(paint > k || arr[i] > m)

              {

                  return false;

              }
                timee=arr[i];
            }
        }
        return true;
    }
    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
        // if(k>n)return -1;
        long long s=0;
        long long sum=0;
        long long ans=-1;
        long long e=accumulate(arr,arr+n,sum);
        // cout<<e<<endl;
        while(s<=e){
            if(n == 1) //corner case

            {

                return arr[0];

            }
            long long m=s+(e-s)/2;
            if(possible(arr,n,k,m)){
                e=m-1;
                ans=m;
            }
            else{
                s=m+1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends