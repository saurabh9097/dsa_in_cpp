#include<bits/stdc++.h>
using namespace std;
string biggerIsGreater(string &a) 
{
    int len = a.size();
    int index = -1;
    for (int i = len - 1; i >= 0; i--)
    {
        if (a[i] > a[i - 1])
        {
            index = i;
            break;
        }
    }
    // cout<<index;
    if (index == -1)
    {
        return "no answer";   
    }
    else
       {
        int prev = index;
        for (int i = index; i < len; i++)
        {
            if (a[i] > a[index - 1] and a[i] <= a[prev])
            {
                prev = i;
            }
            // cout<<a<<endl;
        }
        swap(a[index-1], a[prev]);
        reverse(a.begin() + index, a.end());
        return a;
    }

}
int main(){
    string a= "acbed";
    string te=biggerIsGreater(a);
    cout<<te;
}
