// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      unordered_map<int,int> res;
      for(int i=0;i<N;i++){
          res[arr[i]]++;
      }
      int maxi=1;
       for(int i=0;i<N;i++){
          if(res.count(arr[i]-1)==0){
              int num=arr[i]+1;
              int lmax=1;
              while(res.count(num)!=0){lmax++;
              num++;}
              maxi=max(lmax,maxi);
          }
      }
      return maxi;
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends