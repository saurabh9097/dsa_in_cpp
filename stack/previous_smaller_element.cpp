#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void previous_smaller_element(vector<int> a){ 
        stack<int> s;
        for (int i = 0; i < a.size(); i++)
        {
            while (!s.empty() && s.top()>a[i])
            {
                s.pop();
            }
            if (s.empty()) cout <<-1<<" ";
            else
            {
                cout << s.top() <<" ";
            }
            int temp=a[i];
            s.push(temp);
            
        }
        
    }
    void previous_greater_element(vector<int> a){ 
        stack<int> s;
        for (int i = 0; i < a.size(); i++)
        {
            while (!s.empty() && s.top()<a[i])
            {
                s.pop();
            }
            if (s.empty()) cout <<-1<<" ";
            else
            {
                cout << s.top() <<" ";
            }
            int temp=a[i];
            s.push(temp);
            
        }
        
    }
};
int main(){
    vector<int> a={4,10,5,8,20,15,3,12};
    Solution sol;
    sol.previous_greater_element(a);
}