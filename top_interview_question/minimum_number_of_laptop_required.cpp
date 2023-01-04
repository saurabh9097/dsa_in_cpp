//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    
    int minLaptops(int N, int start[], int end[]) {
        // Code here
      
        map<int,int>res_map;
        for(int i=0;i<N;i++){
            res_map[start[i]]++;
            res_map[end[i]]--;
        }
        int ans=0;
        int maxi=0;
        for(auto i:res_map){
            
            ans+=i.second;
            maxi=max(maxi,ans);
        }
       
        
        return maxi;
    }

    int minLaptops2(int n, int start[], int end[]) {

        sort(start,start+n);

        sort(end,end+n);

        int laptopCount=1, i=1, j=0;

        while(i<n && j<n){

            if(start[i]<end[j]) laptopCount++;

            else j++;

            i++;

        }

        return laptopCount;

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int start[N], end[N];
        for(int i=0; i<N; i++)
            cin>>start[i];
        for(int i=0; i<N; i++)
            cin>>end[i];
            
        Solution ob;
        cout << ob.minLaptops(N, start, end) << endl;
    }
}
// } Driver Code Ends