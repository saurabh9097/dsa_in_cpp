#include <bits/stdc++.h>
using namespace std;
template <class T>
class mystack{
    public:
        int length; //maximum length of stack
        int current; //current length of stack
        T *a;

        mystack(int length){
            length = length;
            current = -1;
            a=new T[length];
        }

        void pop() {
            if (current == -1) return;
            else
            {
                current--;
            }
        }

        void push(T element){
            if (current==length-1)
            {
                cout<<"Stack Overflow\n";
            }
            else
            {
                current++;
                a[current] = element;
            }
        }

        bool empty(){
            return current==length-1;
        }

        T top(){
            if (current==-1)
            {
                throw "Stack Empty";
                // return current;
            }
            else{
                return a[current];
            }
        }
        int size(){
            return current;
        }

};
int main(){
    mystack<int> a(1);
    a.push(1);
    a.push(1);
    a.pop();
    try
    {   
        cout<<a.top();
    }
    catch(const char* msg)
    {
        std::cerr << msg<< '\n';
    }
    
}