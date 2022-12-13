//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    
    bool isPossible(int arr[], int n, int m,int mid){
    int countStudent=1;
    int pageCount=0;
    for(int i=0;i<n;i++){
        if(pageCount+arr[i]<=mid){
            pageCount+=arr[i];
        }
        else{
            countStudent++;
           
            if(countStudent>m||arr[i]>mid){
                return false;
            }
             pageCount=arr[i];
            
        }
        
    }
    return true;
}
    //Function to find minimum number of pages.
    int findPages(int arr[], int n, int m) 
    {
        //code here
        if(m>n)return -1;
         int start=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int ans=-1;
    int end=sum;
    int mid=start+(end-start)/2;
    while(start<=end){
        
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
            
        }
        mid=start+(end-start)/2;
        
    }
    return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends