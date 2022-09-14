#include <bits/stdc++.h>
using namespace std;

void insertTop(stack<int> &s, int topElement)
{
if (s.empty() || topElement > s.top()) 
    {
        s.push(topElement);
        return;
    }
    int temp = s.top();
    s.pop();
    insertTop(s, topElement);
    s.push(temp)  ;
}
void sortstack(stack<int> &s)
{
    if (!s.empty())
    {
        int top_Element = s.top();
        s.pop();
        sortstack(s);
        insertTop(s, top_Element);
    }
}
// sort a stack using temporary stack..
stack<int> sortStack(stack<int> a)
{
    stack<int> temp;
    while (!a.empty())
    {
        int t = a.top();
        a.pop();
        while (!temp.empty() && t > temp.top())
        {
            a.push(temp.top());
            temp.pop();
        }
        temp.push(t);
    }
    return temp;
}

int main()
{
    stack<int> s;
    s.push(5);
    s.push(2);
    s.push(4);
    s.push(1);
    s.push(3);
    s.push(3);
    s.push(3);
    s.push(3);
    s.push(3);
    s.push(3);
    s.push(463433);
    s.push(32);
    s.push(3);
    s.push(3);
    s.push(3);
    s.push(3);
    sortstack(s);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}