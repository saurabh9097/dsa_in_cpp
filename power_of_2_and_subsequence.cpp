//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
float mod(float a, float b)

{

  return ( ((a/b) - floor(a/b))*b );

}
long long power(long long a, long long b, long long n)
{
 
    // Initialize answer
    int res = 1;
 
    // Check till the number becomes zero
    while (b > 0) {
 
        // If y is odd, multiply x with result
        if (b % 2 == 1)
            res = (res * a%n)%n;
 
        // y = y/2
        a=(a%n*a%n)%n;
        b = b >> 1;
 
        // Change x to x^2
        
    }
    return res;
}
    long long numberOfSubsequences(int N, long long A[]){
        // code here 
        long long c=0;
        int M=1e9+7;
        for(int i=0;i<N;i++){
            long long t=0;
            long long temp=A[i];
            while(temp>0){
                t++;
                temp=temp&(temp-1);
            }
            if(t==1)c++;
        }
        long long ans=1,x=2;
        while(c){
            if(c&1)
                ans=(ans*x)%M;
            x=(x*x)%M;
            c>>=1;
        }
        return ans-1;;
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
        long long A[N];
        for(int i=0;i<N;++i){
            cin >> A[i];
        }
        Solution ob;
        cout << ob.numberOfSubsequences(N,A) << endl;
    }
    return 0; 
} 
// } Driver Code Ends