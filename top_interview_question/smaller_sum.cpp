class Solution{
public:
    int binaryStart(vector<int>&arr,int target,int l,int h){
        int ans=-1;
        while(l<=h){
            int m=l+(h-l)/2;
            if(arr[m]>=target){
                h=m-1;
            }else{
                ans=m;
                l=m+1;
            }
        }
        return ans;
    }
    
    vector<long long> smallerSum(int n,vector<int> &arr){
        // Code here
        vector<int>sortedArr(arr);
        sort(sortedArr.begin(),sortedArr.end());
        vector<long long>preSumSortArr(n);
        preSumSortArr[0]=sortedArr[0];
        for(int i=1;i<n;i++)preSumSortArr[i]=preSumSortArr[i-1]+sortedArr[i];
        vector<long long > res(n);
        for(int i=0;i<n;i++){
            int ind=binaryStart(sortedArr,arr[i],0,n-1);
            if(ind==-1)res[i]=0;
            else res[i]=preSumSortArr[ind];
        }
        return res;
    }
};
