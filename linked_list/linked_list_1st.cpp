#include <bits/stdc++.h>
using namespace std;
template <class T>
class Node
{
public:
    T data;
    Node<T> *next;

public:
    Node(T data) { this->data = data; }
    ~Node() {}
};
void insert_node(int value,Node<int> *head,int index){
    Node<int> *toadd=new Node<int>(value);
    if(index==0){
        toadd->next=head;
        head=toadd;
        return;
    }
    Node<int> *prev=head;
    for(int i=0;i<index-1;i++){
        prev=prev->next;
    }
    toadd->next=prev->next;
    prev->next=toadd;
}

int main()
{
    Node<int> *n1 = new Node<int>(10);
    Node<int> *n2 = new Node<int>(20);
    Node<int> *n3 = new Node<int>(30);

    Node<int> *head = n1;
    head->next = n2;
    n2->next = n3;
    n3->next = NULL;
    insert_node(3,head,2);
    std::cout << "linked list got created" << std::endl;
    while (head != NULL)
    {
        std::cout << "Data inside linked list is :: ";
        cout << head->data << " \n";
        head = head->next;
    }
    cout << n1->data << std::endl;
}