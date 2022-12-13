#include<bits/stdc++.h>
using namespace std;
// we will itereate both array in revverse direction beacuse we want place larger elements in the last of the first array 
// compare the elements of the first array and second array ,the larger element will be placed in the last of the first array and will decrement the pointer
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m+n-1;
        int a=m-1,b=n-1;
        while(b>=0&&a>=0){
            if(nums1[a]>nums2[b]){
                nums1[i]=nums1[a--];i--;
            }
            else
            {
                nums1[i]=nums2[b--];i--;
            }
        }
        while(a>=0){nums1[i]=nums1[a--];i--;}
        while(b>=0){nums1[i]=nums2[b--];i--;}
    }
};


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;
while(t--){

}
}