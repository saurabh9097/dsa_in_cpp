//{ Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	int ans=0;
    	vector<int>timeline(2400,0);
    // 	increase the arrival
    	for(int i=0;i<n;i++){
    	    timeline[arr[i]]++;
    	}
    // 	decreasse the departure
    	for(int i=0;i<n;i++){
    	    timeline[dep[i]+1]--;
    	}
    // 	prefix sum
    	for(int i=1;i<2400;i++){
    	    timeline[i]+=timeline[i-1];
    	}
    // 	max of prefix sum array
    	for(int i=0;i<2400;i++){
    	   ans=max(ans,timeline[i]);
    	}
    	return ans;
    }
};


//{ Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}
// } Driver Code Ends//{ Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	int ans=0;
    	vector<int>timeline(2400,0);
    // 	increase the arrival
    	for(int i=0;i<n;i++){
    	    timeline[arr[i]]++;
    	}
    // 	decreasse the departure
    	for(int i=0;i<n;i++){
    	    timeline[dep[i]+1]--;
    	}
    // 	prefix sum
    	for(int i=1;i<2400;i++){
    	    timeline[i]+=timeline[i-1];
    	}
    // 	max of prefix sum array
    	for(int i=0;i<2400;i++){
    	   ans=max(ans,timeline[i]);
    	}
    	return ans;
    }
};


//{ Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}
// } Driver Code Ends