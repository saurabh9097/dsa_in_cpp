#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
node* reverse_linked_list(node *head){
    node* cur=head;
    node*prev=NULL;
    while(cur!=NULL){
        node* temp=cur->next;
        cur->next=prev;
        prev=cur;
        cur=temp;
    }
    return prev;
}
int main()
{
    node *n1 = new node;
    node *n2 = new node;
    node *n3 = new node;
    n1->data = 10;
    n2->data = 20;
    n3->data = 30;
    node *head = n1;
    head->next = n2;
    n2->next = n3;
    n3->next = NULL;
    while (head != NULL)
    {
        cout << head->data << "  ";
        head = head->next;
    }
    head=reverse_linked_list(n1);
    cout<<endl;
    while (head != NULL)
    {
        cout << head->data << "  ";
        head = head->next;
    }

}