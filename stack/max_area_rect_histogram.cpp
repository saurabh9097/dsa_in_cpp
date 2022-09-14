#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int max_area_rect_histogram(vector<int> &a){
            int maxi_area=0;
            for(int i=0;i<a.size();i++){
                int ps=i;
                int ns=i;
                while(ps>=0&&a[ps]>=a[i])ps--;
                while(ns<a.size()&&a[ns]>=a[i])ns++;
                int current_area=(ns-1-ps)*a[i];
                maxi_area=max(current_area,maxi_area);
            }
            return maxi_area;
        }

        vector<int> nextSmallerElement(vector<int>arr,int n){
                stack<int> s;
                s.push(-1);
                vector<int> ans(n);
                for(int i=n-1;i>=0;i--){
                    int curr=arr[i];
                    while(s.top()!=-1 && arr[s.top()]>=curr){
                        s.pop();
                    }
                    ans[i]=s.top();
                    s.push(i);
                }
                
                return ans;
            }
            // Function to find the previous smaller elements
            vector<int> previousSmallerElement(vector<int>arr,int n){
                stack<int> s;
                s.push(-1);
                vector<int> ans(n);
                for(int i=0;i<n;i++){
                    int curr=arr[i];
                    while(s.top()!=-1 && arr[s.top()]>=curr){
                        s.pop();
                    }
                    ans[i]=s.top();
                    s.push(i);
                }
                
                return ans;
            }
            int largestRectangleArea(vector<int>& heights) {
                
                int n=heights.size();
                
                vector<int> next(n);
                next=nextSmallerElement(heights,n);
                
                vector<int> prev(n);
                prev=previousSmallerElement(heights,n);
                
                int area=INT_MIN;
                
                for(int i=0;i<n;i++){
                    int length=heights[i];
                    
                    if(next[i]==-1){
                        next[i]=n;
                    }
                    int breadth=next[i]-prev[i]-1;      
                    int new_area=length*breadth;
                    area=max(area,new_area);
                    
                }
                return area;
            }
            //largest area sub matrix having only 1 not 0
            int largestAreaSubMatrix(vector<vector<int> > &a){
                vector<int>curr_row=a[0];
                int max_area=largestRectangleArea(curr_row);
                for(int i=1;i<a.size();i++){
                    for(int j=0;j<a[0].size();j++){
                        if (a[i][j]>0)
                        {
                            curr_row[j]+=1;
                        }
                        else{
                            curr_row[j]=0;
                        }
                        
                    }
                    int currAns=largestRectangleArea(curr_row);
                    max_area=max(max_area,currAns);
                }
                return max_area;
            }

};
//this question can be solved using stack
int main(){
    vector<vector<int>> a={{0,1,1,1,1,0},
                            {1,1,1,1,0,1},
                            {1,1,0,1,1,1},
                            {1,1,1,1,1,0}};
    Solution solution;
    cout << solution.largestAreaSubMatrix(a) << endl;

}