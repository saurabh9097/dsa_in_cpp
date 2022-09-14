#include<bits/stdc++.h>
using namespace std;
template <class t>
class queueByStack{
    public:
    
    stack<t> stack1;
    stack<t> stack2;
    
    void push(t data){
        stack1.push(data);
    }
    t front(){
        while (!stack1.empty())
        {
            stack2.push(stack1.top());
            stack1.pop();
        }
        t result = stack2.top();
        // stack2.pop();

        while (!stack2.empty())
        {
            stack1.push(stack2.top());
            stack2.pop();
        }
        return result;
    }
    t pop(){
        while (!stack1.empty())
        {
            stack2.push(stack1.top());
            stack1.pop();
        }
        t result = stack2.top();
        stack2.pop();

        while (!stack2.empty())
        {
            stack1.push(stack2.top());
            stack2.pop();
        }
        return result;
    }
    t back(){
        t res=stack1.top();
        // stack1.pop();
        return res;
    }
};
int main(){
    queueByStack<int> q;
    q.push(45);
    q.push(25);
    cout<<q.front();
    cout<<q.back();
    cout<<q.front();
}