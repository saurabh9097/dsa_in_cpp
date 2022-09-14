//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int res(int arr[],int a,int b){
        int maxi=0;
        int index=a;
        for(int i=a;i<=b;i++){
            if(arr[i]>maxi){maxi=arr[i];index=i;}
        }
        return index;
    }
    int minJumps(int arr[], int n){
        // Your code here
        int jump=0;
        int maxrange;
        int steps;
        int i=0;
        while(i<n){
            maxrange=res(arr,i+1,i+arr[i]);
            if(max)
            i=maxrange;
            jump++;
        }
        return jump;
        
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl    ;
    }
    return 0;
}

// } Driver Code Ends
// } Driver Code Ends