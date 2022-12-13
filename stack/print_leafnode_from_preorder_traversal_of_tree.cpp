//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
/*

                    10
                   /  \
                 8    12
                / \   /
               7  9  11
              /
             4
            preorder=[10 8 7 4 9 12 11]
            leaf node=[4 9 11]
*/
class Solution {
  public:
    vector<int> leafNodes(int arr[],int N) {
        // code here
        vector<int>v;
        stack<int>s;
        // push first element of tree
        s.push(arr[0]);
        for(int i=1;i<N;i++){
            // if arr[i] less than top of stack then push in stack
            if(arr[i]<s.top()){
                s.push(arr[i]);
            }
            // else 
            // 1 cond. If arr[i]>stack top then there can be 2 case if it is greater than top and also greater than parent of top
            // then the top element will be leaf node of tree.
            // 2 cond. if arr[i]>top but less than parent of top then arr[i] will be right child of top so top can't be leaf node of tree
            // so simply pop the top and push the arr[i] and continue the process`

            else{
                 int size=s.size();
               int x=s.top();
               while(!s.empty() && arr[i]>s.top())
               s.pop();
               s.push(arr[i]);
               if(size>s.size())
               v.push_back(x);
            }
        }
        //the last element of array will be leaf node of tree always.
         v.push_back(s.top());
       return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int arr[N];
        for(int i=0;i<N;i++)cin>>arr[i];
        Solution ob;
        vector<int>ans=ob.leafNodes(arr,N);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends