#include<bits/stdc++.h>
using namespace std;
template <class T>
class Node{
    public:
        T data;
        Node *next;
        Node(T data){
            this->data = data;
            this->next = NULL;
        }
};

template <class T>
class mystack{
    public:
        int current;
        Node<T>* head;
        mystack(){
            this->current=0;
            this->head =NULL;
        }

        void pop(){
            if (this->head==NULL){}
            else
            {
            head=this->head->next;
            this->current=this->current-1;
                
            }
            
        }
        void push(T element){
            this->current++;
            Node<T>* temp=new Node<T>(element);
            temp->next=this->head;
            this->head =temp;
        }
        bool empty(){
            return this->current==0;
        }
        T top(){
            T temp =this->head->data;
            // this->head=this->head->next;
            return temp;
        }
        T poll(){
            T temp =this->head->data;
            this->head=this->head->next;
            return temp;
        }
        int size(){
            return this->current;
        }
};
// string r(mystack<string> a){
//     if (a.size()==0)
//     cout<< a.poll();
//     r(a);

// }
int main(){
    mystack<string> a;
    a.push("Dhiraj");
    a.push("Suraj");
    // a.pop();
    while (a.size()!=0)
    {
        cout << a.poll()<<endl;
    }
    
}
