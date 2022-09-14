#include <bits/stdc++.h>
using namespace std;
// implement queue using circular array
template <class T>
class circularArrayQueue
{
private:
    int n;
    T *arr;
    int front, rear;

public:
    circularArrayQueue(int length)
    {
        n = length;
        front = -1;
        rear = -1;
        arr = new T[n];
    }
    void enqueue(T data)
    {
        if ((rear + 1) % n == front)
        {
            throw "Size full";
        }
        if (front == -1)
            front = 0;
        rear=(rear+1)%n;
        arr[rear] = data;
    }

    T dequeue(){
        if (front==-1)
        {
            throw "Empty queue";
        }
        T result = arr[front];
        if (front==rear)
        {
            front=rear=-1;
        }
        else{
            front=(front+1)%n;
        }
        return result;
        
    }
    T frontview(){
        if(front==-1&&rear==-1)
        throw "Empty";
        return arr[front];
    }
};
int main(){
    circularArrayQueue<int> a(4);

    a.enqueue(2e5+5);
    a.enqueue(1);
    a.enqueue(3);
    

    cout<<a.dequeue();
    cout<<a.dequeue();
    cout<<a.dequeue();
    try {

    cout<<a.frontview();
    }
    catch(const char* msg){
        cerr<<msg<<endl;
    }
}