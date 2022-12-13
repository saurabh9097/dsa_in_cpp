//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int f=0;
        int s=0;
        int c=0;
        while(f<n&&s<m){
            if(arr1[f]<arr2[s]){
                f++;
                c++;
                if(c==k){
                    return arr1[--f];
                }
            }
            else{
                s++;
                c++;
                if(c==k){
                    return arr2[--s];
                }
            }
        }
        while(f<n){
            f++;
            c++;
            if(c==k){
                    return arr1[--f];
                }
            
        }
        while(s<m){
            s++;
            c++;
            if(c==k){
                return arr2[--s];
            }
        }
    }
};

//{ Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}
// } Driver Code Ends